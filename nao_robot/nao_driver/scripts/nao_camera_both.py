#! /usr/bin/env python

#import roslib
#roslib.load_manifest('nao_driver')
import rospy
from sensor_msgs.msg import Image, CameraInfo
from nao_driver import NaoNode
from sensor_msgs.srv import SetCameraInfo
from camera_info_manager import CameraInfoManager


from naoqi import ALProxy
from vision_definitions import *


class NaoCam (NaoNode):

    
    def __init__(self):
        NaoNode.__init__(self)
        rospy.init_node('nao_camera')
        self.camProxy = self.getProxy("ALVideoDevice")
        if self.camProxy is None:
            exit(1)

        
        # ROS pub/sub
        self.pub_img_ = []
        self.pub_info_ = []
        for i in ['/nao_cam/top/','/nao_cam/bottom/']:
            self.pub_img_ += [rospy.Publisher(i+'image_raw', Image)]
            self.pub_info_ += [rospy.Publisher(i+'camera_info', CameraInfo)]
        
        
#        self.set_camera_info_service_ = rospy.Service('set_camera_info', SetCameraInfo, self.set_camera_info)
        topCamParamsURL = rospy.get_param('~topCamParams','')
        bottomCamParamsURL = rospy.get_param('~bottomCamParams','')
        
        print "urls", topCamParamsURL, bottomCamParamsURL
        self.tCIM = CameraInfoManager('/nao_cam/top/','narrow_stereo/top', topCamParamsURL)
        self.bCIM = CameraInfoManager('/nao_cam/bottom/','narrow_stereo/bottom', bottomCamParamsURL)
        self.tCIM.loadCameraInfo()
        self.bCIM.loadCameraInfo()
        
        # Messages
#        self.info_ = CameraInfo()
#        self.set_default_params_qvga(self.info_)
        self.info_ = []
        self.info_.append(self.tCIM.getCameraInfo())
        self.info_.append(self.bCIM.getCameraInfo())
        
        #TODO: parameters
        self.resolution = rospy.get_param('~quality',30) 
        self.colorSpace = kBGRColorSpace
        self.fps = rospy.get_param('~fps',20) 
        
        print "using fps: ", self.fps
        # init
        self.nameId = "rospy_gvm"
        self.subscribe()

    def subscribe(self):
        # subscribe to both cameras
        rospy.loginfo("Suscribing to cameras")
        try:
            self.nameId = self.camProxy.subscribeCameras(self.nameId,[0,1], [self.resolution,self.resolution],[self.colorSpace,self.colorSpace],self.fps)
        except:
            rospy.loginfo("Suscribing did not work, unsuscribing and trying again ")
            self.camProxy.unsubscribeAllInstances(self.nameId)
            self.nameId = self.camProxy.subscribeCameras(self.nameId,[0,1], [self.resolution,self.resolution],[self.colorSpace,self.colorSpace],self.fps)
        print "subscribed"


    def set_camera_info(self, cameraInfoMsg):
#        print "Received new camera info"
        self.info_ = cameraInfoMsg.camera_info



    def set_default_params_qvga(self, cam_info):
        cam_info.P[0] = 268.663727
        cam_info.P[1] = 0.0
        cam_info.P[2] = 179.971761
        cam_info.P[3] = 0
        cam_info.P[4] = 0.0
        cam_info.P[5] = 271.859741
        cam_info.P[6] = 117.122489
        cam_info.P[7] = 0.0
        cam_info.P[8] = 0.0
        cam_info.P[9] = 0.0
        cam_info.P[10] = 1.0
        cam_info.P[11] = 0.0
        cam_info.D = [-0.064567]

    def main_loop(self):
        img = Image()
        while not rospy.is_shutdown():
            #print "getting image..",
            images = self.camProxy.getImagesRemote  (self.nameId)
            #print "ok"
            # TODO: better time
            for i in [0,1]:
		#print len(images[i])
                image = images[i]
                img.header.stamp = rospy.Time.now()
                if image[7] == 0:
                    img.header.frame_id = "/CameraTop_frame"
                elif image[7] == 1:
                    img.header.frame_id = "/CameraBottom_frame"
                img.height = image[1]
                img.width = image[0]
                nbLayers = image[2]
                #colorspace = image[3]
                if image[3] == kYUVColorSpace:
                    encoding = "mono8"
                elif image[3] == kRGBColorSpace:
                    encoding = "rgb8"
                elif image[3] == kBGRColorSpace:
                    encoding = "bgr8"
                else:
                    rospy.logerror("Received unknown encoding: {0}".format(image[3]))
    
                img.encoding = encoding
                img.step = img.width * nbLayers
		if len(images) >= 2:
                	img.data = images[2][len(images[2])/2 * i:len(images[2])/2 *(i+1) + 1]
		else:
			img.data = []
			print "image with no data"
                self.info_[i].width = img.width
                self.info_[i].height = img.height
                self.info_[i].header = img.header
                self.pub_img_[i].publish(img)
                self.pub_info_[i].publish(self.info_[i])

	    self.camProxy.releaseImages(self.nameId)

        self.camProxy.unsubscribe(self.nameId)

if __name__ == "__main__":
    try:
        naocam = NaoCam()
        naocam.main_loop()
    except RuntimeError, e:
        rospy.logerr('Something went wrong: %s' % (e) )
    rospy.loginfo('Camera stopped')

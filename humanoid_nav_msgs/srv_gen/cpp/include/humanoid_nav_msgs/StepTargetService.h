/* Auto-generated by genmsg_cpp for file /home/ludo/workspace/rosbuild_ws/humanoid_stack/humanoid_msgs/humanoid_nav_msgs/srv/StepTargetService.srv */
#ifndef HUMANOID_NAV_MSGS_SERVICE_STEPTARGETSERVICE_H
#define HUMANOID_NAV_MSGS_SERVICE_STEPTARGETSERVICE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "humanoid_nav_msgs/StepTarget.h"



namespace humanoid_nav_msgs
{
template <class ContainerAllocator>
struct StepTargetServiceRequest_ {
  typedef StepTargetServiceRequest_<ContainerAllocator> Type;

  StepTargetServiceRequest_()
  : step()
  {
  }

  StepTargetServiceRequest_(const ContainerAllocator& _alloc)
  : step(_alloc)
  {
  }

  typedef  ::humanoid_nav_msgs::StepTarget_<ContainerAllocator>  _step_type;
   ::humanoid_nav_msgs::StepTarget_<ContainerAllocator>  step;


  typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StepTargetServiceRequest
typedef  ::humanoid_nav_msgs::StepTargetServiceRequest_<std::allocator<void> > StepTargetServiceRequest;

typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest> StepTargetServiceRequestPtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceRequest const> StepTargetServiceRequestConstPtr;


template <class ContainerAllocator>
struct StepTargetServiceResponse_ {
  typedef StepTargetServiceResponse_<ContainerAllocator> Type;

  StepTargetServiceResponse_()
  {
  }

  StepTargetServiceResponse_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct StepTargetServiceResponse
typedef  ::humanoid_nav_msgs::StepTargetServiceResponse_<std::allocator<void> > StepTargetServiceResponse;

typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceResponse> StepTargetServiceResponsePtr;
typedef boost::shared_ptr< ::humanoid_nav_msgs::StepTargetServiceResponse const> StepTargetServiceResponseConstPtr;

struct StepTargetService
{

typedef StepTargetServiceRequest Request;
typedef StepTargetServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct StepTargetService
} // namespace humanoid_nav_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f22cfce442b381849d82602383b052c7";
  }

  static const char* value(const  ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf22cfce442b38184ULL;
  static const uint64_t static_value2 = 0x9d82602383b052c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/StepTargetServiceRequest";
  }

  static const char* value(const  ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
humanoid_nav_msgs/StepTarget step\n\
\n\
================================================================================\n\
MSG: humanoid_nav_msgs/StepTarget\n\
# Target for a single stepping motion of a humanoid's leg\n\
\n\
geometry_msgs/Pose2D pose   # step pose as relative offset to last leg\n\
uint8 leg                   # which leg to use (left/right, see below)\n\
\n\
uint8 right=0               # right leg constant\n\
uint8 left=1                # left leg constant\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const  ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/StepTargetServiceResponse";
  }

  static const char* value(const  ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.step);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StepTargetServiceRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct StepTargetServiceResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<humanoid_nav_msgs::StepTargetService> {
  static const char* value() 
  {
    return "f22cfce442b381849d82602383b052c7";
  }

  static const char* value(const humanoid_nav_msgs::StepTargetService&) { return value(); } 
};

template<>
struct DataType<humanoid_nav_msgs::StepTargetService> {
  static const char* value() 
  {
    return "humanoid_nav_msgs/StepTargetService";
  }

  static const char* value(const humanoid_nav_msgs::StepTargetService&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f22cfce442b381849d82602383b052c7";
  }

  static const char* value(const humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/StepTargetService";
  }

  static const char* value(const humanoid_nav_msgs::StepTargetServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f22cfce442b381849d82602383b052c7";
  }

  static const char* value(const humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "humanoid_nav_msgs/StepTargetService";
  }

  static const char* value(const humanoid_nav_msgs::StepTargetServiceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HUMANOID_NAV_MSGS_SERVICE_STEPTARGETSERVICE_H


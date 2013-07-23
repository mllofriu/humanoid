cmake_minimum_required(VERSION 2.8.3)
project(nao_msgs)

find_package(catkin REQUIRED COMPONENTS actionlib_msgs std_msgs nav_msgs trajectory_msgs actionlib_msgs geometry_msgs sensor_msgs)

add_service_files(
	FILES
	CmdPoseService.srv
	CmdVelService.srv
	GetInstalledBehaviors.srv
	GetTruepose.srv
)

add_message_files(FILES
	BlinkActionFeedback.msg
	BlinkActionGoal.msg
	BlinkAction.msg
	BlinkActionResult.msg
	BlinkFeedback.msg
	BlinkGoal.msg
	BlinkResult.msg
	BodyPoseActionFeedback.msg
	BodyPoseActionGoal.msg
	BodyPoseAction.msg
	BodyPoseActionResult.msg
	BodyPoseFeedback.msg
	BodyPoseGoal.msg
	BodyPoseResult.msg
	Bumper.msg
	FadeRGB.msg
	FollowPathActionFeedback.msg
	FollowPathActionGoal.msg
	FollowPathAction.msg
	FollowPathActionResult.msg
	FollowPathFeedback.msg
	FollowPathGoal.msg
	FollowPathResult.msg
	JointAnglesWithSpeedActionFeedback.msg
	JointAnglesWithSpeedActionGoal.msg
	JointAnglesWithSpeedAction.msg
	JointAnglesWithSpeedActionResult.msg
	JointAnglesWithSpeedFeedback.msg
	JointAnglesWithSpeedGoal.msg
	JointAnglesWithSpeed.msg
	JointAnglesWithSpeedResult.msg
	JointAngleTrajectory.msg
	JointTrajectoryActionFeedback.msg
	JointTrajectoryActionGoal.msg
	JointTrajectoryAction.msg
	JointTrajectoryActionResult.msg
	JointTrajectoryFeedback.msg
	JointTrajectoryGoal.msg
	JointTrajectoryResult.msg
	RunBehaviorActionFeedback.msg
	RunBehaviorActionGoal.msg
	RunBehaviorAction.msg
	RunBehaviorActionResult.msg
	RunBehaviorFeedback.msg
	RunBehaviorGoal.msg
	RunBehaviorResult.msg
	TactileTouch.msg
	TorsoIMU.msg
	TorsoOdometry.msg
	WordRecognized.msg
)	

generate_messages(DEPENDENCIES std_msgs nav_msgs trajectory_msgs sensor_msgs actionlib_msgs geometry_msgs)

catkin_package()


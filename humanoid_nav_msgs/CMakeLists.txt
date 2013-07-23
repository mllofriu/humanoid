cmake_minimum_required(VERSION 2.8.3)
project(humanoid_nav_msgs)

find_package(catkin REQUIRED COMPONENTS actionlib_msgs std_msgs nav_msgs trajectory_msgs actionlib_msgs geometry_msgs sensor_msgs)

add_message_files(FILES
	ExecFootstepsActionFeedback.msg  ExecFootstepsAction.msg	ExecFootstepsFeedback.msg  ExecFootstepsResult.msg
ExecFootstepsActionGoal.msg	 ExecFootstepsActionResult.msg	ExecFootstepsGoal.msg	   StepTarget.msg
)

add_service_files(FILES
	ClipFootstep.srv  LocalizeFromPointCloud.srv  PlanFootsteps.srv  StepTargetService.srv
)

generate_messages(DEPENDENCIES actionlib_msgs std_msgs nav_msgs trajectory_msgs actionlib_msgs geometry_msgs sensor_msgs)

catkin_package()


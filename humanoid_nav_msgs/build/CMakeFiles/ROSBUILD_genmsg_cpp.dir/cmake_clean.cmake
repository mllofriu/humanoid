FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/humanoid_nav_msgs/msg"
  "../src/humanoid_nav_msgs/srv"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/humanoid_nav_msgs/ExecFootstepsAction.h"
  "../msg_gen/cpp/include/humanoid_nav_msgs/ExecFootstepsGoal.h"
  "../msg_gen/cpp/include/humanoid_nav_msgs/ExecFootstepsActionGoal.h"
  "../msg_gen/cpp/include/humanoid_nav_msgs/ExecFootstepsResult.h"
  "../msg_gen/cpp/include/humanoid_nav_msgs/ExecFootstepsActionResult.h"
  "../msg_gen/cpp/include/humanoid_nav_msgs/ExecFootstepsFeedback.h"
  "../msg_gen/cpp/include/humanoid_nav_msgs/ExecFootstepsActionFeedback.h"
  "../msg_gen/cpp/include/humanoid_nav_msgs/StepTarget.h"
  "../msg/ExecFootstepsAction.msg"
  "../msg/ExecFootstepsGoal.msg"
  "../msg/ExecFootstepsActionGoal.msg"
  "../msg/ExecFootstepsResult.msg"
  "../msg/ExecFootstepsActionResult.msg"
  "../msg/ExecFootstepsFeedback.msg"
  "../msg/ExecFootstepsActionFeedback.msg"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

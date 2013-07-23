FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/humanoid_nav_msgs/msg"
  "../src/humanoid_nav_msgs/srv"
  "CMakeFiles/ROSBUILD_genaction_msgs"
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
  INCLUDE(CMakeFiles/ROSBUILD_genaction_msgs.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

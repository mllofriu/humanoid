FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/humanoid_nav_msgs/msg"
  "../src/humanoid_nav_msgs/srv"
  "CMakeFiles/ROSBUILD_genmsg_py"
  "../src/humanoid_nav_msgs/msg/__init__.py"
  "../src/humanoid_nav_msgs/msg/_ExecFootstepsAction.py"
  "../src/humanoid_nav_msgs/msg/_ExecFootstepsGoal.py"
  "../src/humanoid_nav_msgs/msg/_ExecFootstepsActionGoal.py"
  "../src/humanoid_nav_msgs/msg/_ExecFootstepsResult.py"
  "../src/humanoid_nav_msgs/msg/_ExecFootstepsActionResult.py"
  "../src/humanoid_nav_msgs/msg/_ExecFootstepsFeedback.py"
  "../src/humanoid_nav_msgs/msg/_ExecFootstepsActionFeedback.py"
  "../src/humanoid_nav_msgs/msg/_StepTarget.py"
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
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

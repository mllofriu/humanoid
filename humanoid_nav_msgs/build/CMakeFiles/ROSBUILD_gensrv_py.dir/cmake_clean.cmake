FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/humanoid_nav_msgs/msg"
  "../src/humanoid_nav_msgs/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/humanoid_nav_msgs/srv/__init__.py"
  "../src/humanoid_nav_msgs/srv/_ClipFootstep.py"
  "../src/humanoid_nav_msgs/srv/_PlanFootsteps.py"
  "../src/humanoid_nav_msgs/srv/_StepTargetService.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

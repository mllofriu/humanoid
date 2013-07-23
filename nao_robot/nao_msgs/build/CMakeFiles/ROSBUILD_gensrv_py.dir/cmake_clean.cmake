FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/nao_msgs/msg"
  "../src/nao_msgs/srv"
  "CMakeFiles/ROSBUILD_gensrv_py"
  "../src/nao_msgs/srv/__init__.py"
  "../src/nao_msgs/srv/_GetTruepose.py"
  "../src/nao_msgs/srv/_CmdVelService.py"
  "../src/nao_msgs/srv/_CmdPoseService.py"
  "../src/nao_msgs/srv/_GetInstalledBehaviors.py"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_py.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/nao_msgs/msg"
  "../src/nao_msgs/srv"
  "CMakeFiles/ROSBUILD_gensrv_cpp"
  "../srv_gen/cpp/include/nao_msgs/GetTruepose.h"
  "../srv_gen/cpp/include/nao_msgs/CmdVelService.h"
  "../srv_gen/cpp/include/nao_msgs/CmdPoseService.h"
  "../srv_gen/cpp/include/nao_msgs/GetInstalledBehaviors.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_gensrv_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

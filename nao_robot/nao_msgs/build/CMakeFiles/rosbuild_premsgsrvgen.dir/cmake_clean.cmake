FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/nao_msgs/msg"
  "../src/nao_msgs/srv"
  "CMakeFiles/rosbuild_premsgsrvgen"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/rosbuild_premsgsrvgen.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

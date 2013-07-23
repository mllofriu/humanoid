FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/nao_msgs/msg"
  "../src/nao_msgs/srv"
  "CMakeFiles/rospack_genmsg_all"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/rospack_genmsg_all.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

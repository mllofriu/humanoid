FILE(REMOVE_RECURSE
  "../msg_gen"
  "../srv_gen"
  "../src/humanoid_nav_msgs/msg"
  "../src/humanoid_nav_msgs/srv"
  "CMakeFiles/test"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/test.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)

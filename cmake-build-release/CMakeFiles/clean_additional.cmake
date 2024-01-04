# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\cam_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\cam_autogen.dir\\ParseCache.txt"
  "cam_autogen"
  )
endif()

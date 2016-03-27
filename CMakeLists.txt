cmake_minimum_required(VERSION 2.8)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# browny library setting
file(GLOB_RECURSE LIB_FILES "lib/*.cpp")
add_library(browny ${LIB_FILES})

# browny test setting
enable_testing()
file(GLOB_RECURSE TEST_FILES "test/*.cpp")
add_executable(browny_test ${TEST_FILES})
target_link_libraries(browny_test gtest browny)
add_test(
  NAME test
  COMMAND $<TARGET_FILE:browny_test>
  )

# browny main setting

file(GLOB_RECURSE SRC_FILES "src/*.cpp")
add_executable(browny_main ${SRC_FILES})

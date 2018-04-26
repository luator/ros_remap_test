cmake_minimum_required(VERSION 2.8.3)
project(test_remap)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(printmsg_cpp src/printmsg.cpp)
target_link_libraries(printmsg_cpp ${catkin_LIBRARIES})

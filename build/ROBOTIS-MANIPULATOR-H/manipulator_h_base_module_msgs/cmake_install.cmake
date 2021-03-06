# Install script for directory: /home/DesktopFer/ratePosPaper/src/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/DesktopFer/ratePosPaper/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_h_base_module_msgs/msg" TYPE FILE FILES
    "/home/DesktopFer/ratePosPaper/src/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/msg/JointPose.msg"
    "/home/DesktopFer/ratePosPaper/src/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/msg/KinematicsPose.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_h_base_module_msgs/srv" TYPE FILE FILES
    "/home/DesktopFer/ratePosPaper/src/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/srv/GetJointPose.srv"
    "/home/DesktopFer/ratePosPaper/src/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/srv/GetKinematicsPose.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_h_base_module_msgs/cmake" TYPE FILE FILES "/home/DesktopFer/ratePosPaper/build/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/catkin_generated/installspace/manipulator_h_base_module_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/DesktopFer/ratePosPaper/devel/include/manipulator_h_base_module_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/DesktopFer/ratePosPaper/devel/share/roseus/ros/manipulator_h_base_module_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/DesktopFer/ratePosPaper/devel/share/common-lisp/ros/manipulator_h_base_module_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/DesktopFer/ratePosPaper/devel/share/gennodejs/ros/manipulator_h_base_module_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python2" -m compileall "/home/DesktopFer/ratePosPaper/devel/lib/python2.7/dist-packages/manipulator_h_base_module_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/DesktopFer/ratePosPaper/devel/lib/python2.7/dist-packages/manipulator_h_base_module_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/DesktopFer/ratePosPaper/build/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/catkin_generated/installspace/manipulator_h_base_module_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_h_base_module_msgs/cmake" TYPE FILE FILES "/home/DesktopFer/ratePosPaper/build/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/catkin_generated/installspace/manipulator_h_base_module_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_h_base_module_msgs/cmake" TYPE FILE FILES
    "/home/DesktopFer/ratePosPaper/build/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/catkin_generated/installspace/manipulator_h_base_module_msgsConfig.cmake"
    "/home/DesktopFer/ratePosPaper/build/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/catkin_generated/installspace/manipulator_h_base_module_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/manipulator_h_base_module_msgs" TYPE FILE FILES "/home/DesktopFer/ratePosPaper/src/ROBOTIS-MANIPULATOR-H/manipulator_h_base_module_msgs/package.xml")
endif()


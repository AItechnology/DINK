# Install script for directory: /home/dink/DINK/ros/src/sensing/fusion/packages/dink_for_camera_lidar_calibrator

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/dink/DINK/ros/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/dink/DINK/ros/build/sensing/fusion/packages/dink_for_camera_lidar_calibrator/catkin_generated/installspace/dink_for_camera_lidar_calibrator.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dink_for_camera_lidar_calibrator/cmake" TYPE FILE FILES
    "/home/dink/DINK/ros/build/sensing/fusion/packages/dink_for_camera_lidar_calibrator/catkin_generated/installspace/dink_for_camera_lidar_calibratorConfig.cmake"
    "/home/dink/DINK/ros/build/sensing/fusion/packages/dink_for_camera_lidar_calibrator/catkin_generated/installspace/dink_for_camera_lidar_calibratorConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dink_for_camera_lidar_calibrator" TYPE FILE FILES "/home/dink/DINK/ros/src/sensing/fusion/packages/dink_for_camera_lidar_calibrator/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  include("/home/dink/DINK/ros/build/sensing/fusion/packages/dink_for_camera_lidar_calibrator/catkin_generated/safe_execute_install.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/dink_for_camera_lidar_calibrator" TYPE PROGRAM FILES "/home/dink/DINK/ros/build/sensing/fusion/packages/dink_for_camera_lidar_calibrator/catkin_generated/installspace/cameracalibrator.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/dink_for_camera_lidar_calibrator" TYPE PROGRAM FILES "/home/dink/DINK/ros/build/sensing/fusion/packages/dink_for_camera_lidar_calibrator/catkin_generated/installspace/cameracheck.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/dink_for_camera_lidar_calibrator" TYPE PROGRAM FILES "/home/dink/DINK/ros/build/sensing/fusion/packages/dink_for_camera_lidar_calibrator/catkin_generated/installspace/tarfile_calibration.py")
endif()


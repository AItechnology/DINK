# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dink/DINK/ros/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dink/DINK/ros/build

# Include any dependencies generated for this target.
include common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/depend.make

# Include the progress variables for this target.
include common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/progress.make

# Include the compile flags for this target's objects.
include common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/flags.make

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o: common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/flags.make
common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o: /home/dink/DINK/ros/src/common/libs/amathutils_lib/src/Amathutils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dink/DINK/ros/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o"
	cd /home/dink/DINK/ros/build/common/libs/amathutils_lib && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o -c /home/dink/DINK/ros/src/common/libs/amathutils_lib/src/Amathutils.cpp

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.i"
	cd /home/dink/DINK/ros/build/common/libs/amathutils_lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dink/DINK/ros/src/common/libs/amathutils_lib/src/Amathutils.cpp > CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.i

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.s"
	cd /home/dink/DINK/ros/build/common/libs/amathutils_lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dink/DINK/ros/src/common/libs/amathutils_lib/src/Amathutils.cpp -o CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.s

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.requires:

.PHONY : common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.requires

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.provides: common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.requires
	$(MAKE) -f common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/build.make common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.provides.build
.PHONY : common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.provides

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.provides.build: common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o


# Object files for target amathutils_lib
amathutils_lib_OBJECTS = \
"CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o"

# External object files for target amathutils_lib
amathutils_lib_EXTERNAL_OBJECTS =

/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/build.make
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/libroscpp.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/librosconsole.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/librostime.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /opt/ros/kinetic/lib/libcpp_common.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/dink/DINK/ros/devel/lib/libamathutils_lib.so: common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dink/DINK/ros/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/dink/DINK/ros/devel/lib/libamathutils_lib.so"
	cd /home/dink/DINK/ros/build/common/libs/amathutils_lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/amathutils_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/build: /home/dink/DINK/ros/devel/lib/libamathutils_lib.so

.PHONY : common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/build

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/requires: common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/src/Amathutils.cpp.o.requires

.PHONY : common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/requires

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/clean:
	cd /home/dink/DINK/ros/build/common/libs/amathutils_lib && $(CMAKE_COMMAND) -P CMakeFiles/amathutils_lib.dir/cmake_clean.cmake
.PHONY : common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/clean

common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/depend:
	cd /home/dink/DINK/ros/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dink/DINK/ros/src /home/dink/DINK/ros/src/common/libs/amathutils_lib /home/dink/DINK/ros/build /home/dink/DINK/ros/build/common/libs/amathutils_lib /home/dink/DINK/ros/build/common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : common/libs/amathutils_lib/CMakeFiles/amathutils_lib.dir/depend


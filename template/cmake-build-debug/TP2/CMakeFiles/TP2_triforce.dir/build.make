# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/adam/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/adam/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.6494.38/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adam/Bureau/upem/M2/s1/synthese/projet/template

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug

# Include any dependencies generated for this target.
include TP2/CMakeFiles/TP2_triforce.dir/depend.make

# Include the progress variables for this target.
include TP2/CMakeFiles/TP2_triforce.dir/progress.make

# Include the compile flags for this target's objects.
include TP2/CMakeFiles/TP2_triforce.dir/flags.make

TP2/CMakeFiles/TP2_triforce.dir/triforce.cpp.o: TP2/CMakeFiles/TP2_triforce.dir/flags.make
TP2/CMakeFiles/TP2_triforce.dir/triforce.cpp.o: ../TP2/triforce.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TP2/CMakeFiles/TP2_triforce.dir/triforce.cpp.o"
	cd /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/TP2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TP2_triforce.dir/triforce.cpp.o -c /home/adam/Bureau/upem/M2/s1/synthese/projet/template/TP2/triforce.cpp

TP2/CMakeFiles/TP2_triforce.dir/triforce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP2_triforce.dir/triforce.cpp.i"
	cd /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/TP2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adam/Bureau/upem/M2/s1/synthese/projet/template/TP2/triforce.cpp > CMakeFiles/TP2_triforce.dir/triforce.cpp.i

TP2/CMakeFiles/TP2_triforce.dir/triforce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP2_triforce.dir/triforce.cpp.s"
	cd /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/TP2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adam/Bureau/upem/M2/s1/synthese/projet/template/TP2/triforce.cpp -o CMakeFiles/TP2_triforce.dir/triforce.cpp.s

# Object files for target TP2_triforce
TP2_triforce_OBJECTS = \
"CMakeFiles/TP2_triforce.dir/triforce.cpp.o"

# External object files for target TP2_triforce
TP2_triforce_EXTERNAL_OBJECTS =

TP2/TP2_triforce: TP2/CMakeFiles/TP2_triforce.dir/triforce.cpp.o
TP2/TP2_triforce: TP2/CMakeFiles/TP2_triforce.dir/build.make
TP2/TP2_triforce: glimac/libglimac.a
TP2/TP2_triforce: /usr/lib/x86_64-linux-gnu/libSDLmain.a
TP2/TP2_triforce: /usr/lib/x86_64-linux-gnu/libSDL.so
TP2/TP2_triforce: /usr/lib/x86_64-linux-gnu/libGL.so
TP2/TP2_triforce: /usr/lib/x86_64-linux-gnu/libGLU.so
TP2/TP2_triforce: /usr/lib/x86_64-linux-gnu/libGLEW.so
TP2/TP2_triforce: /usr/lib/x86_64-linux-gnu/libglfw.so.3.2
TP2/TP2_triforce: TP2/CMakeFiles/TP2_triforce.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TP2_triforce"
	cd /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/TP2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP2_triforce.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TP2/CMakeFiles/TP2_triforce.dir/build: TP2/TP2_triforce

.PHONY : TP2/CMakeFiles/TP2_triforce.dir/build

TP2/CMakeFiles/TP2_triforce.dir/clean:
	cd /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/TP2 && $(CMAKE_COMMAND) -P CMakeFiles/TP2_triforce.dir/cmake_clean.cmake
.PHONY : TP2/CMakeFiles/TP2_triforce.dir/clean

TP2/CMakeFiles/TP2_triforce.dir/depend:
	cd /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adam/Bureau/upem/M2/s1/synthese/projet/template /home/adam/Bureau/upem/M2/s1/synthese/projet/template/TP2 /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/TP2 /home/adam/Bureau/upem/M2/s1/synthese/projet/template/cmake-build-debug/TP2/CMakeFiles/TP2_triforce.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : TP2/CMakeFiles/TP2_triforce.dir/depend

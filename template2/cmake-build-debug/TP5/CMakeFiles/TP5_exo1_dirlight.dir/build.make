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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mhudelot/Documents/Synthese/LaraCraft/template2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug

# Include any dependencies generated for this target.
include TP5/CMakeFiles/TP5_exo1_dirlight.dir/depend.make

# Include the progress variables for this target.
include TP5/CMakeFiles/TP5_exo1_dirlight.dir/progress.make

# Include the compile flags for this target's objects.
include TP5/CMakeFiles/TP5_exo1_dirlight.dir/flags.make

TP5/CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.o: TP5/CMakeFiles/TP5_exo1_dirlight.dir/flags.make
TP5/CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.o: ../TP5/exo1_dirlight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TP5/CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.o"
	cd /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/TP5 && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.o -c /Users/mhudelot/Documents/Synthese/LaraCraft/template2/TP5/exo1_dirlight.cpp

TP5/CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.i"
	cd /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/TP5 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mhudelot/Documents/Synthese/LaraCraft/template2/TP5/exo1_dirlight.cpp > CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.i

TP5/CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.s"
	cd /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/TP5 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mhudelot/Documents/Synthese/LaraCraft/template2/TP5/exo1_dirlight.cpp -o CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.s

# Object files for target TP5_exo1_dirlight
TP5_exo1_dirlight_OBJECTS = \
"CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.o"

# External object files for target TP5_exo1_dirlight
TP5_exo1_dirlight_EXTERNAL_OBJECTS =

TP5/TP5_exo1_dirlight: TP5/CMakeFiles/TP5_exo1_dirlight.dir/exo1_dirlight.cpp.o
TP5/TP5_exo1_dirlight: TP5/CMakeFiles/TP5_exo1_dirlight.dir/build.make
TP5/TP5_exo1_dirlight: glimac/libglimac.a
TP5/TP5_exo1_dirlight: /usr/local/lib/libSDLmain.a
TP5/TP5_exo1_dirlight: /usr/local/lib/libSDL.dylib
TP5/TP5_exo1_dirlight: /usr/local/lib/libGLEW.dylib
TP5/TP5_exo1_dirlight: /usr/local/lib/libglfw.3.3.dylib
TP5/TP5_exo1_dirlight: TP5/CMakeFiles/TP5_exo1_dirlight.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TP5_exo1_dirlight"
	cd /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/TP5 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP5_exo1_dirlight.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TP5/CMakeFiles/TP5_exo1_dirlight.dir/build: TP5/TP5_exo1_dirlight

.PHONY : TP5/CMakeFiles/TP5_exo1_dirlight.dir/build

TP5/CMakeFiles/TP5_exo1_dirlight.dir/clean:
	cd /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/TP5 && $(CMAKE_COMMAND) -P CMakeFiles/TP5_exo1_dirlight.dir/cmake_clean.cmake
.PHONY : TP5/CMakeFiles/TP5_exo1_dirlight.dir/clean

TP5/CMakeFiles/TP5_exo1_dirlight.dir/depend:
	cd /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mhudelot/Documents/Synthese/LaraCraft/template2 /Users/mhudelot/Documents/Synthese/LaraCraft/template2/TP5 /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/TP5 /Users/mhudelot/Documents/Synthese/LaraCraft/template2/cmake-build-debug/TP5/CMakeFiles/TP5_exo1_dirlight.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : TP5/CMakeFiles/TP5_exo1_dirlight.dir/depend


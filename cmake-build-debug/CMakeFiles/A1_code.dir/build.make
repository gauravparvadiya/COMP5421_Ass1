# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A1_code.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A1_code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A1_code.dir/flags.make

CMakeFiles/A1_code.dir/main.cpp.o: CMakeFiles/A1_code.dir/flags.make
CMakeFiles/A1_code.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A1_code.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A1_code.dir/main.cpp.o -c "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/main.cpp"

CMakeFiles/A1_code.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A1_code.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/main.cpp" > CMakeFiles/A1_code.dir/main.cpp.i

CMakeFiles/A1_code.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A1_code.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/main.cpp" -o CMakeFiles/A1_code.dir/main.cpp.s

CMakeFiles/A1_code.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/A1_code.dir/main.cpp.o.requires

CMakeFiles/A1_code.dir/main.cpp.o.provides: CMakeFiles/A1_code.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/A1_code.dir/build.make CMakeFiles/A1_code.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/A1_code.dir/main.cpp.o.provides

CMakeFiles/A1_code.dir/main.cpp.o.provides.build: CMakeFiles/A1_code.dir/main.cpp.o


# Object files for target A1_code
A1_code_OBJECTS = \
"CMakeFiles/A1_code.dir/main.cpp.o"

# External object files for target A1_code
A1_code_EXTERNAL_OBJECTS =

A1_code: CMakeFiles/A1_code.dir/main.cpp.o
A1_code: CMakeFiles/A1_code.dir/build.make
A1_code: CMakeFiles/A1_code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A1_code"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A1_code.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A1_code.dir/build: A1_code

.PHONY : CMakeFiles/A1_code.dir/build

CMakeFiles/A1_code.dir/requires: CMakeFiles/A1_code.dir/main.cpp.o.requires

.PHONY : CMakeFiles/A1_code.dir/requires

CMakeFiles/A1_code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A1_code.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A1_code.dir/clean

CMakeFiles/A1_code.dir/depend:
	cd "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code" "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code" "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/cmake-build-debug" "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/cmake-build-debug" "/Users/kgp/Documents/Personal/Advanced Programming/Assignment_1/A1_code/cmake-build-debug/CMakeFiles/A1_code.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A1_code.dir/depend


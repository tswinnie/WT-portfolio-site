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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build"

# Include any dependencies generated for this target.
include source/CMakeFiles/index.wt.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/index.wt.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/index.wt.dir/flags.make

source/CMakeFiles/index.wt.dir/main.cpp.o: source/CMakeFiles/index.wt.dir/flags.make
source/CMakeFiles/index.wt.dir/main.cpp.o: ../source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/index.wt.dir/main.cpp.o"
	cd "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/index.wt.dir/main.cpp.o -c "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/source/main.cpp"

source/CMakeFiles/index.wt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/index.wt.dir/main.cpp.i"
	cd "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/source/main.cpp" > CMakeFiles/index.wt.dir/main.cpp.i

source/CMakeFiles/index.wt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/index.wt.dir/main.cpp.s"
	cd "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/source" && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/source/main.cpp" -o CMakeFiles/index.wt.dir/main.cpp.s

source/CMakeFiles/index.wt.dir/main.cpp.o.requires:

.PHONY : source/CMakeFiles/index.wt.dir/main.cpp.o.requires

source/CMakeFiles/index.wt.dir/main.cpp.o.provides: source/CMakeFiles/index.wt.dir/main.cpp.o.requires
	$(MAKE) -f source/CMakeFiles/index.wt.dir/build.make source/CMakeFiles/index.wt.dir/main.cpp.o.provides.build
.PHONY : source/CMakeFiles/index.wt.dir/main.cpp.o.provides

source/CMakeFiles/index.wt.dir/main.cpp.o.provides.build: source/CMakeFiles/index.wt.dir/main.cpp.o


# Object files for target index.wt
index_wt_OBJECTS = \
"CMakeFiles/index.wt.dir/main.cpp.o"

# External object files for target index.wt
index_wt_EXTERNAL_OBJECTS =

source/index.wt: source/CMakeFiles/index.wt.dir/main.cpp.o
source/index.wt: source/CMakeFiles/index.wt.dir/build.make
source/index.wt: source/CMakeFiles/index.wt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable index.wt"
	cd "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/source" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/index.wt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/index.wt.dir/build: source/index.wt

.PHONY : source/CMakeFiles/index.wt.dir/build

source/CMakeFiles/index.wt.dir/requires: source/CMakeFiles/index.wt.dir/main.cpp.o.requires

.PHONY : source/CMakeFiles/index.wt.dir/requires

source/CMakeFiles/index.wt.dir/clean:
	cd "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/source" && $(CMAKE_COMMAND) -P CMakeFiles/index.wt.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/index.wt.dir/clean

source/CMakeFiles/index.wt.dir/depend:
	cd "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site" "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/source" "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build" "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/source" "/Users/tyroneswinnie/Desktop/wt-3.3.5/Portfolio Site/build/source/CMakeFiles/index.wt.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : source/CMakeFiles/index.wt.dir/depend

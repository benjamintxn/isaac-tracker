# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bentan/isaac-tracker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bentan/isaac-tracker/build

# Include any dependencies generated for this target.
include CMakeFiles/isaac_tracker.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/isaac_tracker.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/isaac_tracker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/isaac_tracker.dir/flags.make

CMakeFiles/isaac_tracker.dir/codegen:
.PHONY : CMakeFiles/isaac_tracker.dir/codegen

CMakeFiles/isaac_tracker.dir/main.cpp.o: CMakeFiles/isaac_tracker.dir/flags.make
CMakeFiles/isaac_tracker.dir/main.cpp.o: /Users/bentan/isaac-tracker/main.cpp
CMakeFiles/isaac_tracker.dir/main.cpp.o: CMakeFiles/isaac_tracker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/bentan/isaac-tracker/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/isaac_tracker.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/isaac_tracker.dir/main.cpp.o -MF CMakeFiles/isaac_tracker.dir/main.cpp.o.d -o CMakeFiles/isaac_tracker.dir/main.cpp.o -c /Users/bentan/isaac-tracker/main.cpp

CMakeFiles/isaac_tracker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/isaac_tracker.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bentan/isaac-tracker/main.cpp > CMakeFiles/isaac_tracker.dir/main.cpp.i

CMakeFiles/isaac_tracker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/isaac_tracker.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bentan/isaac-tracker/main.cpp -o CMakeFiles/isaac_tracker.dir/main.cpp.s

CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o: CMakeFiles/isaac_tracker.dir/flags.make
CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o: /Users/bentan/isaac-tracker/isaac_save_file.cpp
CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o: CMakeFiles/isaac_tracker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/bentan/isaac-tracker/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o -MF CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o.d -o CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o -c /Users/bentan/isaac-tracker/isaac_save_file.cpp

CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bentan/isaac-tracker/isaac_save_file.cpp > CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.i

CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bentan/isaac-tracker/isaac_save_file.cpp -o CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.s

# Object files for target isaac_tracker
isaac_tracker_OBJECTS = \
"CMakeFiles/isaac_tracker.dir/main.cpp.o" \
"CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o"

# External object files for target isaac_tracker
isaac_tracker_EXTERNAL_OBJECTS =

isaac_tracker: CMakeFiles/isaac_tracker.dir/main.cpp.o
isaac_tracker: CMakeFiles/isaac_tracker.dir/isaac_save_file.cpp.o
isaac_tracker: CMakeFiles/isaac_tracker.dir/build.make
isaac_tracker: /Users/bentan/isaac-tracker/kaitai_struct_cpp_stl_runtime/build/libkaitai_struct_cpp_stl_runtime.dylib
isaac_tracker: CMakeFiles/isaac_tracker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/bentan/isaac-tracker/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable isaac_tracker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/isaac_tracker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/isaac_tracker.dir/build: isaac_tracker
.PHONY : CMakeFiles/isaac_tracker.dir/build

CMakeFiles/isaac_tracker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/isaac_tracker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/isaac_tracker.dir/clean

CMakeFiles/isaac_tracker.dir/depend:
	cd /Users/bentan/isaac-tracker/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bentan/isaac-tracker /Users/bentan/isaac-tracker /Users/bentan/isaac-tracker/build /Users/bentan/isaac-tracker/build /Users/bentan/isaac-tracker/build/CMakeFiles/isaac_tracker.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/isaac_tracker.dir/depend


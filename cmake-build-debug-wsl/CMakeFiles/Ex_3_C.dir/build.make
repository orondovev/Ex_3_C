# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/Ex_3_C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex_3_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex_3_C.dir/flags.make

CMakeFiles/Ex_3_C.dir/main.c.o: CMakeFiles/Ex_3_C.dir/flags.make
CMakeFiles/Ex_3_C.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Ex_3_C.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Ex_3_C.dir/main.c.o   -c /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/main.c

CMakeFiles/Ex_3_C.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ex_3_C.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/main.c > CMakeFiles/Ex_3_C.dir/main.c.i

CMakeFiles/Ex_3_C.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ex_3_C.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/main.c -o CMakeFiles/Ex_3_C.dir/main.c.s

CMakeFiles/Ex_3_C.dir/functions.c.o: CMakeFiles/Ex_3_C.dir/flags.make
CMakeFiles/Ex_3_C.dir/functions.c.o: ../functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Ex_3_C.dir/functions.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Ex_3_C.dir/functions.c.o   -c /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/functions.c

CMakeFiles/Ex_3_C.dir/functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Ex_3_C.dir/functions.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/functions.c > CMakeFiles/Ex_3_C.dir/functions.c.i

CMakeFiles/Ex_3_C.dir/functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Ex_3_C.dir/functions.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/functions.c -o CMakeFiles/Ex_3_C.dir/functions.c.s

# Object files for target Ex_3_C
Ex_3_C_OBJECTS = \
"CMakeFiles/Ex_3_C.dir/main.c.o" \
"CMakeFiles/Ex_3_C.dir/functions.c.o"

# External object files for target Ex_3_C
Ex_3_C_EXTERNAL_OBJECTS =

Ex_3_C: CMakeFiles/Ex_3_C.dir/main.c.o
Ex_3_C: CMakeFiles/Ex_3_C.dir/functions.c.o
Ex_3_C: CMakeFiles/Ex_3_C.dir/build.make
Ex_3_C: CMakeFiles/Ex_3_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Ex_3_C"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ex_3_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex_3_C.dir/build: Ex_3_C

.PHONY : CMakeFiles/Ex_3_C.dir/build

CMakeFiles/Ex_3_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ex_3_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ex_3_C.dir/clean

CMakeFiles/Ex_3_C.dir/depend:
	cd /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl /mnt/c/Users/barak/Documents/GitHub/SystemProg_C/Ex_3_C/cmake-build-debug-wsl/CMakeFiles/Ex_3_C.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ex_3_C.dir/depend


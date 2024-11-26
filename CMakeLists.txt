cmake_minimum_required(VERSION 3.11)
project(isaac_tracker)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set the paths to the Kaitai Struct runtime
set(KAITAI_RUNTIME_SRC_DIR "/Users/bentan/isaac-tracker/kaitai_struct_cpp_stl_runtime/src")
set(KAITAI_RUNTIME_LIB_DIR "/Users/bentan/isaac-tracker/kaitai_struct_cpp_stl_runtime/build")

# Include Kaitai Struct runtime headers
include_directories(${KAITAI_RUNTIME_SRC_DIR})

# Link Kaitai Struct runtime library
link_directories(${KAITAI_RUNTIME_LIB_DIR})

# Add the Isaac Tracker executable
add_executable(isaac_tracker main.cpp isaac_save_file.cpp)

# Link the Kaitai Struct runtime library to the executable
target_link_libraries(isaac_tracker ${KAITAI_RUNTIME_LIB_DIR}/libkaitai_struct_cpp_stl_runtime.dylib)
cmake_minimum_required(VERSION 3.13)  # CMake version check
project(Ex1)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(is_prime_prog main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(Ex1 is_prime_prog)
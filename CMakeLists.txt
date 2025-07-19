# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.16)

# Define the project name and programming languages
project(MyCppProject LANGUAGES CXX)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# This tells CMake to place all compiled executables directly into the
# root of the build directory (e.g., 'build/').
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})


# Enable the CTest module for the whole project
enable_testing()

# Tell CMake to look inside the 'src' folder for more instructions
add_subdirectory(src)

# Tell CMake to look inside the 'tests' folder for more instructions
add_subdirectory(tests)
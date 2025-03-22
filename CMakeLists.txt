cmake_minimum_required(VERSION 3.10)
project(TUNNEL VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(include)

# Add executable
# add_executable(tunnel src/main.cpp src/example.cpp)
add_library(tunnel src/main.cpp src/calculator.cpp)

# Set compiler warnings
# if(MSVC)
#   target_compile_options(tunnel PRIVATE /W4)
# else()
#   target_compile_options(tunnel PRIVATE -Wall -Wextra -Wpedantic)
# endif()

# Enable testing
enable_testing()
add_subdirectory(tests)

# Create installable package
# install(TARGETS tunnel DESTINATION bin)
# install(DIRECTORY include/ DESTINATION include)
# This is the top-level CMakeLists.txt file

cmake_minimum_required(VERSION 3.30.5 FATAL_ERROR)

project(Second VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_OSX_ARCHITECTURES arm64)

# dependencies
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# executables
add_subdirectory(src)
add_subdirectory(contrib)
add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE calculator hw01)

# tests
enable_testing()
add_subdirectory(tests)

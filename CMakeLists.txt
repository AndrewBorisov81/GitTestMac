cmake_minimum_required(VERSION 3.0.0)
project(GitTest1 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_executable(GitTest1 main.cpp)

target_link_libraries(GitTest1 PRIVATE my_lib)



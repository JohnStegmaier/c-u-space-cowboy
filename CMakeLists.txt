cmake_minimum_required(VERSION 3.22)
project(SpaceCowboy C)

set(CMAKE_C_STANDARD 23)

add_executable(untitled main.c)

add_library(cowboy cowboy.c)

add_executable(test test_cowboy.c)

target_link_libraries(test cowboy)
cmake_minimum_required(VERSION 3.14)
project(Test C)

set(CMAKE_C_STANDARD 11)

add_executable(Test main.c finaltest.c cmdline.c area_of_circle.c)
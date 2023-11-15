cmake_minimum_required(VERSION 3.26)
project(OS)

set(CMAKE_CXX_STANDARD 17)

add_executable(OS
        gamerunner/world.c
        gamerunner/world.h
        gamerunner/gamerunner.c
)

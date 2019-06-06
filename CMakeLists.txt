cmake_minimum_required(VERSION 3.14)
project(C_Game_Engine C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Game_Engine main.c StateManager.h StateManager.c)
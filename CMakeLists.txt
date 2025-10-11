cmake_minimum_required(VERSION 4.0)
project(Learn_C)

set(CMAKE_C_STANDARD 11)


add_executable(Learn_C main.c
)

# Link against Raylib
target_link_libraries(Learn_C)
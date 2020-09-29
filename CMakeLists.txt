cmake_minimum_required(VERSION 3.16)
project(ush C)

set(CMAKE_C_STANDARD 11)

file(GLOB ush_SRC
        "libmx/inc/*.h"
        "libmx/src/*.c"
        "inc/*.h"
        "src/*.c"
        "*.c"
        )

add_executable(ush ${ush_SRC})

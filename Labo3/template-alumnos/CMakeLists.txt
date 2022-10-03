cmake_minimum_required(VERSION 3.23)
project(template_alumnos)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(src)

add_executable(template_alumnos
        src/generador.cpp
        src/generador.h
        src/main.cpp
        src/vectores.cpp
        src/vectores.h)

cmake_minimum_required(VERSION 3.23)
project(Labo3)

set(CMAKE_CXX_STANDARD 14)

include_directories(template-alumnos/src)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

add_executable(Labo3
        template-alumnos/src/generador.cpp
        template-alumnos/src/generador.h
        template-alumnos/src/main.cpp
        template-alumnos/src/vectores.cpp
        template-alumnos/src/vectores.h)

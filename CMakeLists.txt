cmake_minimum_required(VERSION 3.9)
project(KMA_OOP_Preprocessing)

set(CMAKE_CXX_STANDARD 98)

add_executable(KMA_OOP_Preprocessing
        src/minilibmath/Complex.cpp
        src/minilibmath/Complex.h
        src/minilibmath/minilibmath.cpp
        src/minilibmath/minilibmath.h
        src/main.cpp)
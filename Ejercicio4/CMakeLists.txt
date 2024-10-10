cmake_minimum_required(VERSION 3.29)
project(Proyecto_clase)

set(CMAKE_CXX_STANDARD 20)

add_library(matematicas STATIC matematicas.cpp)

add_executable(Ejercicio4
    funciones.cpp 
    main.cpp  # Assuming you have a main.cpp file
)

target_link_libraries(Ejercicio4 matematicas)

add_library(matematicas SHARED matematicas.cpp) 

target_link_libraries (Ejercicio4 matematicas)
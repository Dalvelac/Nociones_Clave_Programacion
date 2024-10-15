cmake_minimum_required(VERSION 3.29)
project(Proyecto_clase)

set(CMAKE_CXX_STANDARD 20)


add_library(matematicas STATIC ejercicio4/matematicas.cpp
        Ejercicio4/matematicas.cpp)


add_executable(Ejercicio4
ejercicio4/funciones.cpp
ejercicio4/matematicas.cpp
        Ejercicio4/matematicas.cpp
)


add_executable(Ejercicio1 Ejercicio1.cpp
        Ejercicio4/matematicas.cpp
        persona.h)


add_executable(Ejercicio3
Ejercicio3/main2.cpp
Ejercicio3/main.cpp
        Ejercicio4/matematicas.cpp
)


include(FetchContent)
FetchContent_Declare(
fmt
GIT_REPOSITORY https://github.com/fmtlib/fmt.git
GIT_TAG 7.1.3
)
FetchContent_MakeAvailable(fmt)


target_link_libraries(Ejercicio3 PRIVATE fmt::fmt)



cmake_minimum_required(VERSION 3.29)
project(Proyecto_clase)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ejercicio3
        main2.cpp
        main.cpp)

target_link_libraries(Ejercicio3 PRIVATE fmt::fmt)

include(fetchcontent)
FetchContent_Declare(fmt GIT_REPOSITORY https://github.com/fmtlib/fmt.git GIT_TAG 7.1.3)
fetchcontent_makeavailable(fmt)

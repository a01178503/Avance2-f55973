cmake_minimum_required(VERSION 3.26)
project(Avance2_f55973)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Avance2_f55973
        Inventario1.csv
        Inventario2.csv
        main.cpp
        Polimorfismo.cpp
        Polimorfismo.h
        Serie.cpp
        Serie.h
        Episodio.cpp
        Episodio.h
        Video.cpp
        Video.h
        Pelicula.cpp
        Pelicula.h)

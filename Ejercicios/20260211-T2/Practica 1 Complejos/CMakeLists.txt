cmake_minimum_required(VERSION 3.31)
project(Practica_1_Complejos C)

set(CMAKE_C_STANDARD 11)

add_executable(Practica_1_Complejos main.c
        operaciones.c
        operaciones.h
        circuito.c
        circuito.h)

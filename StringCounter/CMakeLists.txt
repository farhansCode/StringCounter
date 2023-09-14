cmake_minimum_required(VERSION 3.21)
project(assignment1 C)

set(CMAKE_C_STANDARD 11)

add_executable(assignment1 main.c fileIO.c fileIO.h insertionSort.c insertionSort.h stringCounter.c stringCounter.h binarySearch.c binarySearch.h Occurances.c Occurances.h)

cmake_minimum_required(VERSION 3.0.0)
project(Lab4 VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories( ./include/lab4 ./src ./libs )

add_executable(Lab4 ./src/main.cpp ./src/macierz.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

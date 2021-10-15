cmake_minimum_required(VERSION 2.8)

project(Cvector)

set(Cvector_src Test.cpp main.cpp CVector.cpp)
set(Cvector_hdr CVector.h Header.h)

add_executable(${PROJECT_NAME} ${VectorClass_src} ${VectorClass_hdr})
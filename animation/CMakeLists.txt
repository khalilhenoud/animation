cmake_minimum_required(VERSION 3.22)

project(animation VERSION 1.0)

add_library(${PROJECT_NAME} SHARED
        ./source/animation_asset.c
        ./include/animation/internal/module.h
        )

target_link_libraries(${PROJECT_NAME}
        PUBLIC library
        PUBLI math)

target_include_directories(${PROJECT_NAME} PUBLIC
        "${PROJECT_SOURCE_DIR}/include"
        )
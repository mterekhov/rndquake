cmake_minimum_required(VERSION 3.19)
set(CMAKE_CXX_STANDARD 20)
include(GNUInstallDirs)
set(PROJECT_NAME quake)

project(${PROJECT_NAME})

set(SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Quake-master/WinQuake)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Quake-master/WinQuake)

set(SOURCE_FILES ${SOURCES_DIR}/common.c
                 ${SOURCES_DIR}/zone.c
                 )
set(INCLUDE_FILES ${INCLUDE_DIR}/common.h
                  ${INCLUDE_DIR}/quakedef.h
                  ${INCLUDE_DIR}/zone.h
                  )

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${INCLUDE_FILES})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIR})

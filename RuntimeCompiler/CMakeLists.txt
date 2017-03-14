cmake_minimum_required(VERSION 3.6)
project(RuntimeCompiler)

set(CMAKE_CXX_STANDARD 14)

set(HEADER_FILES MonitorSourceChange.h)
set(SOURCE_FILES main.cpp MonitorSourceChange.cpp)

if(APPLE)
    find_library(CORE_SERVICE CoreServices)
    set(EXTRA_LIBS ${CORE_SERVICE})

    list(APPEND SOURCE_FILES MonitorSourceChange_Apple.cpp)
endif()


add_executable(RuntimeCompiler ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(RuntimeCompiler ${EXTRA_LIBS})
cmake_minimum_required(VERSION 3.6)
project(RuntimeCompiler)

set(CMAKE_CXX_STANDARD 11)

set(HEADER_FILES MonitorSourceChange.h)
set(SOURCE_FILES main.cpp MonitorSourceChange.cpp)

if(APPLE)
    add_definitions(-D__APPLE__)
    if(IOS)
        find_library(CORE_SERVICE MobileCoreServices)
        add_definitions(-DTARGET_OS_IPHONE)
    else()
        find_library(CORE_SERVICE CoreServices)
        add_definitions(-DTARGET_OS_MAC)
    endif()
    set(EXTRA_LIBS ${CORE_SERVICE})

    list(APPEND SOURCE_FILES MonitorSourceChange_Apple.cpp)
endif()


add_executable(RuntimeCompiler ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(RuntimeCompiler ${EXTRA_LIBS})
cmake_minimum_required(VERSION 3.16)

project(klib
    VERSION 0.1.0
    LANGUAGES C
)

# C Standard
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Collect source files
file(GLOB_RECURSE KLIB_SOURCES CONFIGURE_DEPENDS
    "${PROJECT_SOURCE_DIR}/src/*.c"
)

# Create shared library
add_library(klib SHARED
    ${KLIB_SOURCES}
)

# Library properties
set_target_properties(klib PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION 0
)

# Include directories
target_include_directories(klib
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Compiler warnings
if(MSVC)
    target_compile_options(klib PRIVATE /W4)
else()
    target_compile_options(klib PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()

message(STATUS "Building klib ${PROJECT_VERSION}")
message(STATUS "Source files: ${KLIB_SOURCES}")

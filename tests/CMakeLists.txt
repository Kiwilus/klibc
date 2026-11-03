cmake_minimum_required(VERSION 3.16)

project(main
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(main
    main.c
)

# Include directory
target_include_directories(main PRIVATE
    ../include
)

# Link against the prebuilt library
target_link_libraries(main PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/../build/libklib.so"
)

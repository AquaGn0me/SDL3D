cmake_minimum_required(VERSION 3.10)

# Set the project name
project(SDL23D)

# Specify the include directory for SDL2
include_directories(
    C:/Users/milop/Programming/C++/SDL2/x86_64-w64-mingw32/include
    C:/Users/milop/Programming/C++/GLAD/include
)
include_directories(${PROJECT_SOURCE_DI}/src)

# Specify the library directory for SDL2
link_directories(C:/Users/milop/Programming/C++/SDL2/x86_64-w64-mingw32/lib)

# Optional: Set the compiler flags if needed (like -m64)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64")

# Add the executable
add_executable(main ./src/main.cpp ./src/glad.c)

# Link the SDL2 library
target_link_libraries(
    main
    mingw32
    SDL2main
    SDL2
    opengl32
)

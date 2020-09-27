set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

cmake_minimum_required(VERSION 3.0)

project ("SDL2GameMaker" VERSION 0.0.1
                         DESCRIPTION "Library to help make SDL2 games"
                         HOMEPAGE_URL "https://github.com/vinujohn/sdl2-game-maker")

include_directories(include)
add_subdirectory(src)


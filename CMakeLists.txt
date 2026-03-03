cmake_minimum_required(VERSION 4.2)
project(DevicoTestCart C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#Add the game (for PC its a shared lib, ill have to rewrite this once i get the system going)
add_library(${PROJECT_NAME}_Game SHARED
        src/test_game.c
)

#API Headers
target_include_directories(${PROJECT_NAME}_Game PRIVATE
        include
)

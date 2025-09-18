cmake_minimum_required(VERSION 3.30)
project(UUID_Generator C)

set(CMAKE_C_STANDARD 23)

add_executable(UUID_Generator main.c)

target_link_libraries(${PROJECT_NAME} Rpcrt4)

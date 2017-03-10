set(app_src main.c)

get_property(inc_dirs DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
include_directories(${inc_dirs})

add_executable(hello_world ${app_src})
target_link_libraries(hello_world stm32l4xx_hal system startup)

_generate_object(hello_world .bin binary)
_generate_object(hello_world .hex ihex)
_firmware_size(hello_world)

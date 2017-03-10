set(app_src main.c)

get_property(inc_dirs DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
include_directories(${inc_dirs})

add_executable(hello_world ${app_src})
target_link_libraries(hello_world system stm32l4xx_hal)

_generate_object(hello_world .bin)
_generate_object(hello_world .hex)
_firmware_size(hello_world)
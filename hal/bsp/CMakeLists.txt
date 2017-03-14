set(bsp_led_src bsp_led.c)

get_property(inc_dirs DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
include_directories(${inc_dirs})

add_library(bsp_led OBJECT ${bsp_led_src})
set(startup_src armgcc/startup_stm32l476xx.s)
set(system_src gpio.c
               stm32l4xx_hal_msp.c 
               stm32l4xx_it.c 
               system_stm32l4xx.c)

get_property(inc_dirs DIRECTORY PROPERTY INCLUDE_DIRECTORIES)
include_directories(${inc_dirs})

add_library(startup OBJECT ${startup_src})
add_library(system OBJECT ${system_src})

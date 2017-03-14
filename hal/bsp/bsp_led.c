#include "bsp_led.h"
#include "main.h"
#include "gpio.h"

void BSP_LedOn(const Board_Leds_t led)
{
  switch (led) {
  case GREEN:
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
    break;
  default:
    break;
  }
}

void BSP_LedOff(const Board_Leds_t led)
{
  switch (led) {
  case GREEN:
    HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
    break;
  default:
    break;
  }
}

void BSP_LedToggle(const Board_Leds_t led)
{
  switch (led) {
  case GREEN:
    HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
    break;
  default:
    break;
  }
}

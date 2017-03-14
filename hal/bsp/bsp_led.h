#ifndef ARM_HELLO_WORLD_BSP_LED_H
#define ARM_HELLO_WORLD_BSP_LED_H
/** \defgroup BSP_Led BSP Led specific functions
 *  \brief Board abstraction for working with on-board LED
 *  \ingroup BSP
 * @{
 */

/// Available LEDs on the board
typedef enum {
  /// Green LED
  GREEN
} Board_Leds_t;

/**
 * \brief Switch on a LED on the board
 * @param led LED identifier to switch on
 */
void BSP_LedOn(const Board_Leds_t led);
/**
 * \brief Switch off a LED on the board
 * @param led LED identifier to switch off
 */
void BSP_LedOff(const Board_Leds_t led);
/**
 * \brief Toggle a LED state
 * @param led LED identifier to toggle
 */
void BSP_LedToggle(const Board_Leds_t led);

/**
 * @}
 */

#endif // ARM_HELLO_WORLD_BSP_LED_H

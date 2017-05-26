#include "STM32F103C8T6_registers.h"

/*****************************************************************************/
/***************************macro definitions*********************************/
/*****************************************************************************/
#define PERIPHERALS_BASE_ADDRESS 0x40000000
#define GPIO_A_OFFSET            0x00010800
#define GPIO_B_OFFSET            0x00010C00
#define GPIO_C_OFFSET            0x00011000
#define AFIO_OFFSET              0x00010000

/*****************************************************************************/
/***************************local variable declarations***********************/
/*****************************************************************************/

// general purpose input-output registers section
static GPIO gpio_A;
static GPIO gpio_B;
static GPIO gpio_C;

// alternative function input_output registers section
static AFIO afio;

/*****************************************************************************/
/***************************global function definitions***********************/
/*****************************************************************************/
void registers_init(void)
{
    // general purpose input-output registers section
    gpio_A = (GPIO)(PERIPHERALS_BASE_ADDRESS+GPIO_A_OFFSET);
    gpio_B = (GPIO)(PERIPHERALS_BASE_ADDRESS+GPIO_B_OFFSET);
    gpio_C = (GPIO)(PERIPHERALS_BASE_ADDRESS+GPIO_C_OFFSET);
    
    // alternative function input_output registers section
    afio   = (AFIO)(PERIPHERALS_BASE_ADDRESS+AFIO_OFFSET);
}
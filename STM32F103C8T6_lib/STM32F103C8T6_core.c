#include "STM32F103C8T6_core.h"
#include "STM32F103C8T6_registers.h"

/*****************************************************************************/
/***************************local function definitions************************/
/*****************************************************************************/
static void initialize_board(void)
{
    registers_init();
}

int main()
{
    initialize_board();
    
    setup();
    
    while (true)
    {
        loop();
    }
	return 0;
}
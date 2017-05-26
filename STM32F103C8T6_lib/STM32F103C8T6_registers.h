#include <stdint.h>
#include <stdbool.h>

/*****************************************************************************/
/***************************type declarations*********************************/
/*****************************************************************************/
typedef uint8_t  BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;
typedef uint64_t QWORD;

typedef struct
{
	volatile BYTE configuration_register_low;
	volatile BYTE configuration_register_high;
	volatile BYTE input_data_register;
	volatile BYTE output_data_register;
	volatile BYTE bit_set_reset_register;
	volatile BYTE bit_reset_register;
	volatile BYTE configuration_lock_register;
} *GPIO;

typedef struct
{
    volatile BYTE event_control_register;
    volatile BYTE remap_and_debug_register;
    volatile BYTE ext_interrupt_cfg_register_1;
    volatile BYTE ext_interrupt_cfg_register_2;
    volatile BYTE ext_interrupt_cfg_register_3;
    volatile BYTE ext_interrupt_cfg_register_4;
    volatile BYTE remap_and_debug_register_2;     
} *AFIO;

typedef enum
{
    input_floating,
    input_pull_up,
    input_pull_down,
    analog,
    output_open_drain,
    output_push_pull,
    alt_func_push_pull,
    alt_func_open_drain
} GPIO_Mode;
/*****************************************************************************/
/***************************global function declarations**********************/
/*****************************************************************************/
void registers_init(void);


#include "py/mphal.h"

void Mcudev_Devebox_F407VE_board_early_init(void) {
    // set SPI flash CS pin high
    mp_hal_pin_output(pin_A15);
    // mp_hal_pin_write(pin_A15, 1);
    //mp_hal_pin_write(pin_A15, 0);
    //mp_hal_pin_write(pin_A15, 0);
}

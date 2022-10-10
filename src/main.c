/* Copyright 2022, Laboratorio de Microprocesadores
 * Facultad de Ciencias Exactas y Tecnología
 * Universidad Nacional de Tucuman
 */

/** \brief Simple sample of use LPC HAL gpio functions
 **
 ** \addtogroup samples Sample projects
 ** \brief Sample projects to use as a starting point
 ** @{ */

/* === Headers files inclusions =============================================================== */
#include "bsp.h"
#include <stdbool.h>

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================= */

int main(void) {

    int divisor  = 0;
    board_t board = BoardCreate();

    while (true) {
        
        if  (GetStateEntradaDigital(board->boton_1_prueba)){
            ActivarSalidaDigital(board->led_azul);
        } else {
            DesactivarSalidaDigital(board->led_azul);
        }
   
        if(ActivaEntradaDigital(board->boton_2_cambiar)){
            CambiarSalidaDigital(board->led_uno_rojo);
        }

        if(GetStateEntradaDigital(board->boton_3_encender)){
            ActivarSalidaDigital(board->led_dos_amarillo);
        }      

        if(GetStateEntradaDigital(board->boton_4_apagar)){
            DesactivarSalidaDigital(board->led_dos_amarillo);
        }


        divisor++;
        if (divisor == 5) {
            divisor = 0;
            CambiarSalidaDigital(board->led_tres_verde);
        }

        for (int index = 0; index < 100; index++) {
            for (int delay = 0; delay < 25000; delay++) {
                __asm("NOP");
            }
        }
    }
}

/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */

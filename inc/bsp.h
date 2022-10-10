/* Copyright 2022, Laboratorio de Microprocesadores 
 * Facultad de Ciencias Exactas y Tecnología 
 * Universidad Nacional de Tucuman
 */

#ifndef BSP_H
#define BSP_H

/** \brief Plantilla de archivos de cabecera 
 **
 ** \addtogroup hal HAL
 ** \brief Hardware abstraction layer
 ** @{ 
 */

/* === Inclusiones de archivos externos ==================================== */

#include "digital.h"

/* === Cabecera C++ ======================================================== */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros publicos ======================================== */

/* == Declaraciones de tipos de datos publicos ============================= */

typedef struct board_s {
    digital_output_t led_azul;
    digital_output_t led_uno_rojo;
    digital_output_t led_dos_amarillo;
    digital_output_t led_tres_verde;

    digital_input_t boton_1_prueba;
    digital_input_t boton_2_cambiar;
    digital_input_t boton_3_encender;
    digital_input_t boton_4_apagar;
} const * board_t;

/* === Declaraciones de variables publicas ================================= */

/* === Declaraciones de funciones publicas ================================= */

board_t BoardCreate(void);

/* === Ciere de documentacion ============================================== */

#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* BSP_H */
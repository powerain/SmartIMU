/* #include "app_kSerial.h" */

#ifndef __APP_KSERIAL_H
#define __APP_KSERIAL_H

#include "stm32f4xx_hal.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
typedef enum {
  KS_INT8    = 0x00, // 8'b000x_xxxx, max lens = 24
  KS_INT16   = 0x20, // 8'b001x_xxxx, max lens = 12
  KS_INT32   = 0x40, // 8'b010x_xxxx, max lens = 6
  KS_INT64   = 0x60, // 8'b011x_xxxx, max lens = 3
  KS_FLOAT32 = 0xC0, // 8'b110x_xxxx, max lens = 6
  KS_FLOAT64 = 0xE0, // 8'b111x_xxxx, max lens = 3
} KSerial_TypeDef;

typedef void (*ptrSerial)(uint8_t);
/*=====================================================================================================*/
/*=====================================================================================================*/
void kSerial_Config( ptrSerial pSerial );
void kSerial_sendData( void *signalData, uint8_t type, uint8_t lens );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif

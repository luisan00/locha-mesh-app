/**
   (c) Copyright 2019 locha.io project developers
   Licensed under a MIT license, see LICENSE file in the root folder
   for a full text.
*/
#ifndef SCREEN_H_
#define SCREEN_H_


/* 
Aqui defines las funciones, clases etc a las que quieres hacer referencia
cuando haces un include (import en python, require en JS) desde otro punto de la aplicación.
.....por ejemplo iniciar la pantalla:

bool screen_init();

posteriormente si lo quieres usar en Turpial.cpp, pones en la cabecera del mismo:

#include <screen.h>

y tienes acceso a toooodo este archivo.
#define 


*/

bool screen_init();


// BLE_img
#define BLE_width   8
#define BLE_height  10
const unsigned char BLE_img[] PROGMEM = {
  0x18, 0x28, 0x4A, 0x2C, 0x18, 0x2C, 0x4A, 0x28, 0x18, 0x00,
}; // BLE_img

// WST_img
#define WST_width   14
#define WST_height  8
const unsigned char WST_bits[] PROGMEM = {
  0xF0, 0x03, 0x04, 0x08, 0xF2, 0x13, 0x09, 0x24, 0xE4, 0x09,
  0x10, 0x02, 0xC0, 0x00, 0xC0, 0x00,
}; // WST_img

// BAT_img
#define BAT_width   20
#define BAT_height  9
const unsigned char BAT_img[] PROGMEM = {
  0xFC, 0xFF, 0x0F, 0x04, 0x00, 0x08, 0x07, 0x00, 0x08, 0x07,
  0x00, 0x08, 0x07, 0x00, 0x08, 0x07, 0x00, 0x08, 0x07, 0x00,
  0x08, 0x04, 0x00, 0x08, 0xFC, 0xFF, 0x0F,
}; // BAT_img

#endif // SCREEN_H_

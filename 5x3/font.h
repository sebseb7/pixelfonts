#ifndef FONT_H
#define FONT_H

// The ardiono AVR core will try to use the pgmspace stuff to save RAM

#ifdef __AVR__
#include <avr/pgmspace.h>
typedef prog_uint8_t glyph5x3[3];
#else
#define PROGMEM
typedef unsigned char glyph5x3[3];
#endif

extern const glyph5x3 font5x3[];
extern const int font5x3len;

#endif //FONT_H

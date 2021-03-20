#include "../include/driver_framebuffer.h"
const uint8_t roboto_16pt7bBitmaps[] = {
  0x00, 0xFD, 0x55, 0x41, 0xC0, 0x99, 0x99, 0x09, 0x82, 0x61, 0x90, 0x64,
  0x7F, 0xC4, 0xC1, 0x30, 0xC8, 0xFF, 0x88, 0x82, 0x60, 0x98, 0x64, 0x00,
  0x08, 0x08, 0x3C, 0x62, 0x43, 0xC3, 0x40, 0x60, 0x38, 0x06, 0x03, 0xC1,
  0xC3, 0x43, 0x3E, 0x18, 0x18, 0x70, 0x11, 0x12, 0x26, 0x44, 0x88, 0xA0,
  0xE4, 0x01, 0x00, 0x6E, 0x0B, 0x22, 0x44, 0x48, 0x91, 0x90, 0x1C, 0x3C,
  0x19, 0x86, 0x21, 0x98, 0x6C, 0x0E, 0x03, 0x81, 0xB2, 0xCC, 0xB1, 0xEC,
  0x31, 0x0E, 0x3C, 0xC0, 0xF0, 0x08, 0x88, 0xC4, 0x23, 0x18, 0xC6, 0x31,
  0x84, 0x21, 0x84, 0x10, 0x40, 0x82, 0x08, 0x61, 0x0C, 0x63, 0x18, 0xC6,
  0x31, 0x88, 0xC4, 0x44, 0x00, 0x18, 0x18, 0x9A, 0xFE, 0x19, 0x3C, 0x64,
  0x46, 0x18, 0x18, 0x18, 0x18, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x6D, 0x60,
  0xF8, 0xF0, 0x06, 0x08, 0x10, 0x60, 0x83, 0x04, 0x08, 0x30, 0x41, 0x83,
  0x04, 0x18, 0x00, 0x3C, 0x66, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3,
  0xC3, 0xC3, 0x66, 0x3C, 0x09, 0xF2, 0x10, 0x84, 0x21, 0x08, 0x42, 0x10,
  0x80, 0x3C, 0x46, 0xC3, 0x83, 0x03, 0x02, 0x06, 0x0C, 0x18, 0x30, 0x20,
  0x40, 0xFF, 0x3C, 0x46, 0xC3, 0xC3, 0x03, 0x06, 0x3C, 0x06, 0x03, 0x83,
  0xC3, 0xC2, 0x3C, 0x03, 0x01, 0xC0, 0x70, 0x3C, 0x1B, 0x04, 0xC3, 0x30,
  0x8C, 0x63, 0x3F, 0xF0, 0x30, 0x0C, 0x03, 0x00, 0x7F, 0x60, 0x60, 0x60,
  0x7E, 0x63, 0x03, 0x01, 0x01, 0xC1, 0x43, 0x63, 0x3C, 0x0C, 0x30, 0x60,
  0x40, 0xDC, 0xE2, 0xC3, 0xC1, 0xC1, 0xC1, 0x43, 0x62, 0x3C, 0xFF, 0x03,
  0x03, 0x02, 0x06, 0x04, 0x0C, 0x08, 0x18, 0x18, 0x30, 0x30, 0x60, 0x3C,
  0x66, 0xC3, 0xC3, 0xC3, 0x66, 0x3C, 0x42, 0xC3, 0xC3, 0xC3, 0x43, 0x3C,
  0x3C, 0x66, 0xC2, 0xC3, 0x83, 0xC3, 0xC3, 0x67, 0x3B, 0x02, 0x06, 0x0C,
  0x38, 0xF0, 0x00, 0xF0, 0x6C, 0x00, 0x00, 0x6D, 0x60, 0x02, 0x1D, 0xE7,
  0x0E, 0x0F, 0x03, 0x81, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x80, 0xF0, 0x3C,
  0x07, 0x07, 0x3C, 0xF0, 0x80, 0x79, 0x8A, 0x18, 0x30, 0x61, 0x86, 0x18,
  0x30, 0x00, 0x01, 0x83, 0x00, 0x07, 0xC0, 0x60, 0xC3, 0x00, 0x98, 0x02,
  0x43, 0xC5, 0x19, 0x1C, 0x44, 0x63, 0x11, 0x88, 0x46, 0x23, 0x18, 0x8C,
  0x73, 0x32, 0x47, 0x71, 0x00, 0x02, 0x00, 0x0C, 0x10, 0x0F, 0xC0, 0x06,
  0x00, 0x60, 0x0F, 0x00, 0x90, 0x09, 0x01, 0x98, 0x10, 0x83, 0x0C, 0x3F,
  0xC2, 0x04, 0x60, 0x66, 0x06, 0xC0, 0x30, 0xFE, 0x61, 0xB0, 0x78, 0x3C,
  0x1E, 0x1B, 0xF9, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x3F, 0xE0, 0x1F, 0x08,
  0x66, 0x0B, 0x03, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x34, 0x08,
  0x86, 0x1E, 0x00, 0xFE, 0x30, 0xCC, 0x1B, 0x02, 0xC0, 0xF0, 0x3C, 0x0F,
  0x03, 0xC0, 0xF0, 0x2C, 0x1B, 0x0C, 0xFE, 0x00, 0xFF, 0xE0, 0x30, 0x18,
  0x0C, 0x06, 0x03, 0xFD, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0F, 0xF8, 0xFF,
  0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
  0x1F, 0x18, 0x66, 0x0F, 0x03, 0xC0, 0x30, 0x0C, 0x03, 0x1F, 0xC0, 0xF0,
  0x36, 0x0C, 0xC3, 0x1F, 0x00, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70,
  0x1F, 0xFF, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x40, 0xFF, 0xF8,
  0x01, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0xE0, 0xD0,
  0x4C, 0x63, 0xE0, 0xC1, 0xF0, 0x6C, 0x33, 0x18, 0xCC, 0x36, 0x0F, 0x83,
  0xB0, 0xC6, 0x30, 0xCC, 0x13, 0x06, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
  0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xE0, 0x1F, 0x01,
  0xFC, 0x0F, 0xE0, 0x5D, 0x06, 0xEC, 0x27, 0x23, 0x39, 0x99, 0xCC, 0x8E,
  0x2C, 0x71, 0xC3, 0x86, 0x1C, 0x30, 0x80, 0xC0, 0xE0, 0x78, 0x36, 0x1B,
  0x0C, 0xC6, 0x23, 0x19, 0x86, 0xC1, 0x60, 0xF0, 0x38, 0x18, 0x1E, 0x08,
  0x66, 0x0F, 0x03, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x36, 0x0C,
  0x86, 0x1F, 0x00, 0xFE, 0x30, 0x6C, 0x0B, 0x02, 0xC0, 0xF0, 0x2C, 0x1B,
  0xFC, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x00, 0x1E, 0x18, 0x64, 0x0B,
  0x03, 0xC0, 0xE0, 0x38, 0x0E, 0x03, 0xC0, 0xF0, 0x34, 0x09, 0x86, 0x1F,
  0x00, 0x70, 0x08, 0xFE, 0x30, 0x6C, 0x1B, 0x06, 0xC1, 0xB0, 0x4F, 0xE3,
  0x18, 0xC3, 0x30, 0xCC, 0x1B, 0x06, 0xC0, 0xC0, 0x3E, 0x31, 0xB0, 0x78,
  0x3C, 0x03, 0x00, 0x70, 0x0E, 0x01, 0xE0, 0xF0, 0x6C, 0x33, 0xE0, 0xFF,
  0xC1, 0x00, 0x40, 0x10, 0x04, 0x01, 0x00, 0x40, 0x10, 0x04, 0x01, 0x00,
  0x40, 0x10, 0x04, 0x00, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C,
  0x0F, 0x03, 0xC0, 0xF0, 0x34, 0x09, 0x86, 0x1E, 0x00, 0xC0, 0x68, 0x09,
  0x83, 0x30, 0x62, 0x08, 0x63, 0x0C, 0x60, 0x88, 0x1B, 0x03, 0x60, 0x28,
  0x07, 0x00, 0x40, 0x83, 0x07, 0x86, 0x0B, 0x0C, 0x36, 0x3C, 0x64, 0x68,
  0xC8, 0x91, 0x19, 0x36, 0x36, 0x6C, 0x28, 0x58, 0x50, 0xA0, 0xA1, 0xC1,
  0xC1, 0x81, 0x03, 0x00, 0x60, 0xE4, 0x18, 0xC6, 0x0C, 0xC1, 0xB0, 0x1C,
  0x01, 0x80, 0x70, 0x1B, 0x03, 0x30, 0xC6, 0x30, 0x6E, 0x06, 0xC0, 0xEC,
  0x19, 0x86, 0x18, 0xC1, 0x30, 0x36, 0x03, 0x80, 0x70, 0x04, 0x00, 0x80,
  0x10, 0x02, 0x00, 0x40, 0xFF, 0x81, 0x80, 0xC0, 0xC0, 0x60, 0x60, 0x60,
  0x30, 0x30, 0x30, 0x18, 0x18, 0x0F, 0xF8, 0xFC, 0xCC, 0xCC, 0xCC, 0xCC,
  0xCC, 0xCC, 0xCC, 0xCF, 0xC0, 0x81, 0x81, 0x03, 0x06, 0x04, 0x0C, 0x08,
  0x18, 0x30, 0x20, 0x60, 0x40, 0xE4, 0x92, 0x49, 0x24, 0x92, 0x49, 0x3C,
  0x30, 0xC7, 0x92, 0xCF, 0x30, 0xFF, 0xE2, 0x30, 0x3C, 0x66, 0xC2, 0x03,
  0x3F, 0x43, 0xC3, 0xC3, 0xC7, 0x7B, 0xC0, 0xC0, 0xC0, 0xC0, 0xDC, 0xE2,
  0xC3, 0xC3, 0xC1, 0xC1, 0xC3, 0xC3, 0xE2, 0xDC, 0x3C, 0x46, 0xC2, 0x81,
  0x80, 0x80, 0x80, 0xC3, 0x46, 0x3C, 0x03, 0x03, 0x03, 0x03, 0x3B, 0x67,
  0xC3, 0xC3, 0x83, 0x83, 0xC3, 0xC3, 0x67, 0x3B, 0x3C, 0x62, 0x43, 0xC3,
  0xFF, 0xC0, 0xC0, 0xC2, 0x63, 0x3E, 0x1C, 0xC3, 0x0C, 0xFC, 0xC3, 0x0C,
  0x30, 0xC3, 0x0C, 0x30, 0xC0, 0x3B, 0x67, 0xC3, 0xC3, 0x83, 0x83, 0xC3,
  0xC3, 0x67, 0x3B, 0x03, 0x83, 0x46, 0x3C, 0xC0, 0xC0, 0xC0, 0xC0, 0xDE,
  0xE2, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xF0, 0xFF, 0xFF,
  0xF0, 0x33, 0x00, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3E, 0xC0, 0xC0,
  0xC0, 0xC0, 0xC7, 0xCC, 0xC8, 0xD8, 0xF0, 0xD8, 0xCC, 0xC4, 0xC6, 0xC3,
  0xFF, 0xFF, 0xFF, 0xF0, 0xDE, 0x73, 0x8A, 0x2C, 0x30, 0xF0, 0xC3, 0xC3,
  0x0F, 0x0C, 0x3C, 0x30, 0xF0, 0xC3, 0xC3, 0x0F, 0x0C, 0x30, 0xDE, 0xE2,
  0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x3C, 0x66, 0xC3, 0x81,
  0x81, 0x81, 0x81, 0xC3, 0x66, 0x3C, 0xDC, 0xE6, 0xC3, 0xC3, 0xC1, 0xC1,
  0xC3, 0xC3, 0xE6, 0xDC, 0xC0, 0xC0, 0xC0, 0xC0, 0x3B, 0x67, 0xC3, 0x83,
  0x83, 0x83, 0x83, 0xC3, 0x67, 0x3B, 0x03, 0x03, 0x03, 0x03, 0xDF, 0x31,
  0x8C, 0x63, 0x18, 0xC6, 0x00, 0x7D, 0x8F, 0x1E, 0x06, 0x03, 0x81, 0xC1,
  0xC6, 0xF8, 0x31, 0xBE, 0x63, 0x18, 0xC6, 0x31, 0x8C, 0x30, 0xC3, 0xC3,
  0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x47, 0x7B, 0xC1, 0xB1, 0x98, 0xC4,
  0x43, 0x61, 0xB0, 0x50, 0x28, 0x1C, 0x04, 0x00, 0x86, 0x1C, 0x63, 0xC6,
  0x34, 0xF2, 0x49, 0x26, 0x96, 0x79, 0xE3, 0x1C, 0x30, 0xC3, 0x0C, 0xE3,
  0x31, 0x0D, 0x82, 0x81, 0xC0, 0xE0, 0x50, 0x6C, 0x63, 0x71, 0xC0, 0xC1,
  0xB1, 0x98, 0xC4, 0x43, 0x61, 0xB0, 0x50, 0x38, 0x1C, 0x04, 0x02, 0x03,
  0x01, 0x03, 0x00, 0xFE, 0x0C, 0x30, 0xC1, 0x86, 0x18, 0x30, 0xC1, 0xFC,
  0x19, 0x88, 0xC6, 0x31, 0x8C, 0xC3, 0x18, 0xC6, 0x30, 0x86, 0x18, 0xFF,
  0xFE, 0xC3, 0x08, 0x63, 0x18, 0xC6, 0x09, 0x8C, 0x63, 0x18, 0x8C, 0xC0,
  0x78, 0x73, 0x38, 0x78 };

const GFXglyph roboto_16pt7bGlyphs[] = {
  {     0,   1,   1,   4,    0,    0 },   // 0x20 ' '
  {     1,   2,  13,   5,    1,  -12 },   // 0x21 '!'
  {     5,   4,   4,   6,    1,  -13 },   // 0x22 '"'
  {     7,  10,  13,  11,    1,  -12 },   // 0x23 '#'
  {    24,   8,  17,  10,    1,  -14 },   // 0x24 '$'
  {    41,  11,  13,  13,    1,  -12 },   // 0x25 '%'
  {    59,  10,  13,  11,    1,  -12 },   // 0x26 '&'
  {    76,   1,   4,   3,    1,  -13 },   // 0x27 '''
  {    77,   5,  18,   6,    1,  -13 },   // 0x28 '('
  {    89,   5,  18,   6,    0,  -13 },   // 0x29 ')'
  {   101,   8,   8,   8,    0,  -12 },   // 0x2A '*'
  {   109,   8,   9,  10,    1,  -10 },   // 0x2B '+'
  {   118,   3,   4,   4,    0,   -1 },   // 0x2C ','
  {   120,   5,   1,   5,    0,   -5 },   // 0x2D '-'
  {   121,   2,   2,   5,    1,   -1 },   // 0x2E '.'
  {   122,   7,  14,   7,    0,  -12 },   // 0x2F '/'
  {   135,   8,  13,  10,    1,  -12 },   // 0x30 '0'
  {   148,   5,  13,  10,    1,  -12 },   // 0x31 '1'
  {   157,   8,  13,  10,    1,  -12 },   // 0x32 '2'
  {   170,   8,  13,  10,    1,  -12 },   // 0x33 '3'
  {   183,  10,  13,  10,    0,  -12 },   // 0x34 '4'
  {   200,   8,  13,  10,    1,  -12 },   // 0x35 '5'
  {   213,   8,  13,  10,    1,  -12 },   // 0x36 '6'
  {   226,   8,  13,  10,    1,  -12 },   // 0x37 '7'
  {   239,   8,  13,  10,    1,  -12 },   // 0x38 '8'
  {   252,   8,  13,  10,    1,  -12 },   // 0x39 '9'
  {   265,   2,  10,   4,    1,   -9 },   // 0x3A ':'
  {   268,   3,  12,   4,    0,   -9 },   // 0x3B ';'
  {   273,   7,   8,   9,    1,   -9 },   // 0x3C '<'
  {   280,   8,   5,  10,    1,   -8 },   // 0x3D '='
  {   285,   8,   8,   9,    1,   -9 },   // 0x3E '>'
  {   293,   7,  13,   9,    1,  -12 },   // 0x3F '?'
  {   305,  14,  17,  16,    1,  -12 },   // 0x40 '@'
  {   335,  12,  13,  12,    0,  -12 },   // 0x41 'A'
  {   355,   9,  13,  11,    1,  -12 },   // 0x42 'B'
  {   370,  10,  13,  12,    1,  -12 },   // 0x43 'C'
  {   387,  10,  13,  12,    1,  -12 },   // 0x44 'D'
  {   404,   9,  13,  10,    1,  -12 },   // 0x45 'E'
  {   419,   8,  13,  10,    1,  -12 },   // 0x46 'F'
  {   432,  10,  13,  12,    1,  -12 },   // 0x47 'G'
  {   449,  10,  13,  13,    1,  -12 },   // 0x48 'H'
  {   466,   1,  13,   5,    2,  -12 },   // 0x49 'I'
  {   468,   9,  13,  10,    0,  -12 },   // 0x4A 'J'
  {   483,  10,  13,  11,    1,  -12 },   // 0x4B 'K'
  {   500,   8,  13,  10,    1,  -12 },   // 0x4C 'L'
  {   513,  13,  13,  16,    1,  -12 },   // 0x4D 'M'
  {   535,   9,  13,  13,    2,  -12 },   // 0x4E 'N'
  {   550,  10,  13,  12,    1,  -12 },   // 0x4F 'O'
  {   567,  10,  13,  11,    1,  -12 },   // 0x50 'P'
  {   584,  10,  15,  12,    1,  -12 },   // 0x51 'Q'
  {   603,  10,  13,  11,    1,  -12 },   // 0x52 'R'
  {   620,   9,  13,  11,    1,  -12 },   // 0x53 'S'
  {   635,  10,  13,  11,    0,  -12 },   // 0x54 'T'
  {   652,  10,  13,  12,    1,  -12 },   // 0x55 'U'
  {   669,  11,  13,  11,    0,  -12 },   // 0x56 'V'
  {   687,  15,  13,  16,    1,  -12 },   // 0x57 'W'
  {   712,  11,  13,  11,    0,  -12 },   // 0x58 'X'
  {   730,  11,  13,  11,    0,  -12 },   // 0x59 'Y'
  {   748,   9,  13,  11,    1,  -12 },   // 0x5A 'Z'
  {   763,   4,  18,   5,    1,  -14 },   // 0x5B '['
  {   772,   7,  14,   7,    0,  -12 },   // 0x5C '\'
  {   785,   3,  18,   5,    0,  -14 },   // 0x5D ']'
  {   792,   6,   6,   8,    1,  -12 },   // 0x5E '^'
  {   797,   8,   1,   8,    0,    1 },   // 0x5F '_'
  {   798,   4,   3,   6,    0,  -13 },   // 0x60 '`'
  {   800,   8,  10,  10,    1,   -9 },   // 0x61 'a'
  {   810,   8,  14,  10,    1,  -13 },   // 0x62 'b'
  {   824,   8,  10,   9,    1,   -9 },   // 0x63 'c'
  {   834,   8,  14,  10,    1,  -13 },   // 0x64 'd'
  {   848,   8,  10,  10,    1,   -9 },   // 0x65 'e'
  {   858,   6,  14,   6,    0,  -13 },   // 0x66 'f'
  {   869,   8,  14,  10,    1,   -9 },   // 0x67 'g'
  {   883,   8,  14,  10,    1,  -13 },   // 0x68 'h'
  {   897,   2,  14,   4,    1,  -13 },   // 0x69 'i'
  {   901,   4,  18,   4,   -1,  -13 },   // 0x6A 'j'
  {   910,   8,  14,   9,    1,  -13 },   // 0x6B 'k'
  {   924,   2,  14,   4,    1,  -13 },   // 0x6C 'l'
  {   928,  14,  10,  16,    1,   -9 },   // 0x6D 'm'
  {   946,   8,  10,  10,    1,   -9 },   // 0x6E 'n'
  {   956,   8,  10,  10,    1,   -9 },   // 0x6F 'o'
  {   966,   8,  14,  10,    1,   -9 },   // 0x70 'p'
  {   980,   8,  14,  10,    1,   -9 },   // 0x71 'q'
  {   994,   5,  10,   6,    1,   -9 },   // 0x72 'r'
  {  1001,   7,  10,   9,    1,   -9 },   // 0x73 's'
  {  1010,   5,  12,   6,    0,  -11 },   // 0x74 't'
  {  1018,   8,  10,  10,    1,   -9 },   // 0x75 'u'
  {  1028,   9,  10,   9,    0,   -9 },   // 0x76 'v'
  {  1040,  12,  10,  14,    1,   -9 },   // 0x77 'w'
  {  1055,   9,  10,   9,    0,   -9 },   // 0x78 'x'
  {  1067,   9,  14,   9,    0,   -9 },   // 0x79 'y'
  {  1083,   7,  10,   9,    1,   -9 },   // 0x7A 'z'
  {  1092,   5,  17,   6,    1,  -13 },   // 0x7B '{'
  {  1103,   1,  15,   4,    2,  -12 },   // 0x7C '|'
  {  1105,   5,  17,   6,    0,  -13 },   // 0x7D '}'
  {  1116,  10,   3,  12,    1,   -6 } }; // 0x7E '~'

const GFXfont roboto_16pt7b = {
  (uint8_t  *)roboto_16pt7bBitmaps,
  (GFXglyph *)roboto_16pt7bGlyphs,
  0x20, 0x7E, 16 };//B

// Approx. 1792 bytes

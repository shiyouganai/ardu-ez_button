/**
 * \file
 * \author shiyouganai
 * \copyright 2019 shiyouganai
 * 
 * \brief File defining general game sprites.
 */
#include <game_sprites.h>

const unsigned char PROGMEM nutButton_plus_mask[] =
{
// width, height,
66, 56,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x60, 0xe0, 0x20, 0xe0, 0x00, 0xe0, 0x00, 0xe0, 0x90, 0xf0, 0x00, 0xf8, 0x00, 0xf8, 0x04, 0xfc, 0x00, 0xfe, 0x00, 0xfe, 0x82, 0xfe, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 
0x80, 0xff, 0x00, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x80, 0xff, 0x80, 0xff, 0x02, 0xfe, 0x00, 0xfe, 0x04, 0xfc, 0x00, 0xfc, 0x00, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0x38, 0xf8, 0x38, 0xf8, 0x78, 0xf8, 0x78, 0xf8, 0xfc, 0xfc, 0x0c, 0xfc, 0x64, 0xfc, 0x14, 0xfc, 0x94, 0xfc, 0xc4, 0xfc, 0x64, 0xfc, 0x8c, 0xfc, 0xfc, 0xfc, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0x1e, 0xfe, 0x03, 0xff, 0x01, 0xff, 0x80, 0xff, 0xf0, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xc0, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x03, 0xff, 0xc0, 0xff, 0xfc, 0xff, 0xff, 0xff, 
0x3f, 0xff, 0x03, 0xff, 0x00, 0xff, 0x00, 0xff, 0xe0, 0xff, 0xfe, 0xff, 0xff, 0xff, 0x1e, 0xff, 0x00, 0xff, 0x03, 0xff, 0x03, 0xff, 0x07, 0xff, 0x07, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3e, 0xff, 0x0e, 0xff, 0x0e, 0xff, 0x1c, 0xff, 0x18, 0xff, 0x18, 0xff, 0x00, 0xff, 0x01, 0xff, 0x7a, 0xff, 0xc6, 0xff, 0x3c, 0xff, 0xf2, 0xff, 0x0e, 0xff, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x7c, 0xfc, 0x8f, 0xff, 0xe1, 0xff, 0x00, 0xff, 0x00, 0xff, 0x30, 0xff, 0x7c, 0xff, 0x3f, 0xff, 0x0f, 0xff, 0x03, 0xff, 0x00, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x1f, 0xff, 0x01, 0xff, 0x00, 0xff, 0x0c, 0xff, 0x3f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 
0xfc, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xf8, 0xff, 0x7f, 0xff, 0x3f, 0xff, 0x07, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xc0, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x03, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0xff, 0xff, 0x00, 0xff, 0xfd, 0xff, 0x57, 0xff, 0x00, 0xff, 0xff, 0xff, 0x6f, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xf0, 0xf0, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x8f, 0xff, 0x3f, 0xff, 0xf8, 0xff, 0xe0, 0xff, 0x80, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0x70, 0xff, 0x9c, 0xff, 0x2f, 0xff, 0xd1, 0xff, 0x36, 0xff, 0x2d, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xf7, 0xff, 0x89, 0xff, 0x7f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0xf8, 0xf8, 0x7e, 0xfe, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xf1, 0xff, 0xcf, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0xfb, 0xff, 0xe7, 0xff, 0xce, 0xff, 0xdc, 0xff, 0x9c, 0xff, 0xbc, 0xff, 0x38, 0xff, 0x38, 0xff, 0x38, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x60, 0xff, 0x60, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 
0xe0, 0xff, 0xe0, 0xff, 0x60, 0xff, 0x60, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x30, 0xff, 0x30, 0xff, 0xb8, 0xff, 0xb8, 0xff, 0x58, 0xff, 0xcc, 0xff, 0xac, 0xff, 0xcc, 0xff, 0xf6, 0xff, 0xa2, 0xff, 0xdb, 0xff, 0x25, 0xff, 0x48, 0xff, 0xb6, 0xff, 0x48, 0xff, 0x92, 0xff, 0x65, 0xff, 0x92, 0xff, 0x79, 0xff, 0x44, 0xff, 0x3b, 0xff, 0x64, 0xff, 0x9f, 0xff, 0x70, 0xff, 0x8f, 0xff, 0x72, 0xff, 
0xf0, 0xf0, 0xfc, 0xfc, 0xff, 0xff, 0xf1, 0xff, 0xe6, 0xff, 0xc3, 0xff, 0xd1, 0xff, 0xd8, 0xff, 0xdc, 0xff, 0xce, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfd, 0xff, 0xfb, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xef, 0xff, 0xef, 0xff, 0xef, 0xff, 0x6f, 0xff, 0xdf, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 
0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xef, 0xff, 0x67, 0xff, 0xef, 0xff, 0xaa, 0xff, 0xf7, 0xff, 0xb3, 0xff, 0xfb, 0xff, 0xaa, 0xff, 0x5d, 0xff, 0xf4, 0xff, 0x2e, 0xff, 0xf2, 0xff, 0x4f, 0xff, 0xb8, 0xff, 0x67, 0xff, 0x9a, 0xff, 0x75, 0xff, 0x80, 0xff, 0x66, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xd4, 0xff, 0x8a, 0xff, 0x61, 0xff, 0x9e, 0xff, 0x61, 0xff, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 
0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 

// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0xc0, 0xa0, 0xe0, 0xa0, 0xe0, 0x50, 0xf0, 0xb0, 0xf0, 0x30, 0xf0, 0xf0, 0xf0, 0x70, 0xf0, 0x70, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x10, 0xf0, 0x10, 0xf0, 0x10, 0xf0, 
0x18, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0x18, 0xf8, 0x38, 0xf8, 0x58, 0xf8, 0xb8, 0xf8, 0xb8, 0xf8, 0x78, 0xf8, 0x78, 0xf8, 0xfc, 0xfc, 0x0c, 0xfc, 0x64, 0xfc, 0x14, 0xfc, 0x94, 0xfc, 0xc4, 0xfc, 0x64, 0xfc, 0x8c, 0xfc, 0xfc, 0xfc, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0xbe, 0xfe, 0x4f, 0xff, 0x36, 0xff, 0x19, 0xff, 0x0a, 0xff, 0x01, 0xff, 0xc1, 0xff, 0xf0, 0xff, 0xf8, 0xff, 0xf0, 0xff, 0x00, 0xff, 0x00, 0xff, 0xc0, 0xff, 0xf0, 0xff, 0xf8, 0xff, 0x30, 0xff, 0x00, 0xff, 0xc0, 0xff, 
0xf0, 0xff, 0xf8, 0xff, 0x30, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xe0, 0xff, 0xf0, 0xff, 0xe0, 0xff, 0x00, 0xff, 0x30, 0xff, 0x38, 0xff, 0x78, 0xff, 0x70, 0xff, 0x70, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xc0, 0xff, 0x83, 0xff, 0x86, 0xff, 0x0d, 0xff, 0x7a, 0xff, 0xc6, 0xff, 0x3c, 0xff, 0xf2, 0xff, 0x0e, 0xff, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x7c, 0xfc, 0x8f, 0xff, 0xe1, 0xff, 0x1e, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0xc0, 0xff, 0xf8, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x0f, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x1f, 0xff, 0x03, 0xff, 0xc0, 0xff, 0xfc, 0xff, 0xff, 0xff, 
0xff, 0xff, 0x83, 0xff, 0x00, 0xff, 0x00, 0xff, 0xc0, 0xff, 0xfe, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xc0, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x03, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x00, 0xff, 0x80, 0xff, 0xff, 0xff, 0x00, 0xff, 0xfd, 0xff, 0x57, 0xff, 0x00, 0xff, 0xff, 0xff, 0x6f, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xf0, 0xf0, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x8f, 0xff, 0x3f, 0xff, 0xf8, 0xff, 0xe0, 0xff, 0x80, 0xff, 0x03, 0xff, 0x07, 0xff, 0x03, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x07, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x03, 0xff, 0x07, 0xff, 
0x07, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x07, 0xff, 0x03, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x0c, 0xff, 0x1f, 0xff, 0x0f, 0xff, 0x03, 0xff, 0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0x70, 0xff, 0x9c, 0xff, 0x2f, 0xff, 0xd1, 0xff, 0x36, 0xff, 0x2d, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xf7, 0xff, 0x89, 0xff, 0x7f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0xf8, 0xf8, 0x7e, 0xfe, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xf1, 0xff, 0xcf, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0xfb, 0xff, 0xe7, 0xff, 0xce, 0xff, 0xdc, 0xff, 0x9c, 0xff, 0xbc, 0xff, 0x38, 0xff, 0x38, 0xff, 0x38, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x60, 0xff, 0x60, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 
0xe0, 0xff, 0xe0, 0xff, 0x60, 0xff, 0x60, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x30, 0xff, 0x30, 0xff, 0xb8, 0xff, 0xb8, 0xff, 0x58, 0xff, 0xcc, 0xff, 0xac, 0xff, 0xcc, 0xff, 0xf6, 0xff, 0xa2, 0xff, 0xdb, 0xff, 0x25, 0xff, 0x48, 0xff, 0xb6, 0xff, 0x48, 0xff, 0x92, 0xff, 0x65, 0xff, 0x92, 0xff, 0x79, 0xff, 0x44, 0xff, 0x3b, 0xff, 0x64, 0xff, 0x9f, 0xff, 0x70, 0xff, 0x8f, 0xff, 0x72, 0xff, 
0xf0, 0xf0, 0xfc, 0xfc, 0xff, 0xff, 0xf1, 0xff, 0xe6, 0xff, 0xc3, 0xff, 0xd1, 0xff, 0xd8, 0xff, 0xdc, 0xff, 0xce, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfd, 0xff, 0xfb, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xef, 0xff, 0xef, 0xff, 0xef, 0xff, 0x6f, 0xff, 0xdf, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 
0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xef, 0xff, 0x67, 0xff, 0xef, 0xff, 0xaa, 0xff, 0xf7, 0xff, 0xb3, 0xff, 0xfb, 0xff, 0xaa, 0xff, 0x5d, 0xff, 0xf4, 0xff, 0x2e, 0xff, 0xf2, 0xff, 0x4f, 0xff, 0xb8, 0xff, 0x67, 0xff, 0x9a, 0xff, 0x75, 0xff, 0x80, 0xff, 0x66, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xd4, 0xff, 0x8a, 0xff, 0x61, 0xff, 0x9e, 0xff, 0x61, 0xff, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 
0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
};

const unsigned char PROGMEM ezButton_plus_mask[] =
{
// width, height,
66, 56,
// FRAME 00
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0x60, 0xe0, 0x20, 0xe0, 0x00, 0xe0, 0x00, 0xf0, 0x90, 0xf8, 0x80, 0xf8, 0x80, 0xfc, 0xc4, 0xfc, 0xc0, 0xfe, 0xc0, 0xfe, 0xc2, 0xfe, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe1, 0xff, 
0xe0, 0xff, 0x00, 0xff, 0x01, 0xff, 0x00, 0xff, 0x80, 0xff, 0x80, 0xff, 0x81, 0xff, 0x80, 0xff, 0x00, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xfe, 0x02, 0xfe, 0x00, 0xfe, 0x04, 0xfc, 0x00, 0xfc, 0x00, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0x38, 0xf8, 0x38, 0xf8, 0x78, 0xf8, 0x78, 0xf8, 0xfc, 0xfc, 0x0c, 0xfc, 0x64, 0xfc, 0x14, 0xfc, 0x94, 0xfc, 0xc4, 0xfc, 0x64, 0xfc, 0x8c, 0xfc, 0xfc, 0xfc, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0x1e, 0xfe, 0x03, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0xe0, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xe3, 0xff, 0xe3, 0xff, 0xf1, 0xff, 0xf1, 0xff, 0xf1, 0xff, 0x71, 0xff, 0x70, 0xff, 
0x70, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x03, 0xff, 0x07, 0xff, 0x07, 0xff, 0x07, 0xff, 0x07, 0xff, 0x07, 0xff, 0x8f, 0xff, 0xcf, 0xff, 0xef, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfc, 0xff, 0x7c, 0xff, 0x7c, 0xff, 0x38, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x7a, 0xff, 0xc6, 0xff, 0x3c, 0xff, 0xf2, 0xff, 0x0e, 0xff, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x7c, 0xfc, 0x8f, 0xff, 0xe1, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xf1, 0xff, 0x71, 0xff, 0x79, 0xff, 0x79, 0xff, 0x79, 0xff, 0x39, 0xff, 0x38, 0xff, 0x38, 0xff, 0x38, 0xff, 0x00, 0xff, 
0x00, 0xff, 0x00, 0xff, 0xe0, 0xff, 0xf0, 0xff, 0xf8, 0xff, 0xfc, 0xff, 0xfc, 0xff, 0xfe, 0xff, 0xfe, 0xff, 0xef, 0xff, 0xef, 0xff, 0xe7, 0xff, 0xc3, 0xff, 0xc3, 0xff, 0xc1, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0xff, 0xff, 0x00, 0xff, 0xfd, 0xff, 0x57, 0xff, 0x00, 0xff, 0xff, 0xff, 0x6f, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xf0, 0xf0, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x8f, 0xff, 0x3f, 0xff, 0xf8, 0xff, 0xe0, 0xff, 0x80, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 
0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x01, 0xff, 0x03, 0xff, 0x03, 0xff, 0x03, 0xff, 0x01, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0x70, 0xff, 0x9c, 0xff, 0x2f, 0xff, 0xd1, 0xff, 0x36, 0xff, 0x2d, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xf7, 0xff, 0x89, 0xff, 0x7f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0xf8, 0xf8, 0x7e, 0xfe, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xf1, 0xff, 0xcf, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0xfb, 0xff, 0xe7, 0xff, 0xce, 0xff, 0xdc, 0xff, 0x9c, 0xff, 0xbc, 0xff, 0x38, 0xff, 0x38, 0xff, 0x38, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x60, 0xff, 0x60, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 
0xe0, 0xff, 0xe0, 0xff, 0x60, 0xff, 0x60, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x30, 0xff, 0x30, 0xff, 0xb8, 0xff, 0xb8, 0xff, 0x58, 0xff, 0xcc, 0xff, 0xac, 0xff, 0xcc, 0xff, 0xf6, 0xff, 0xa2, 0xff, 0xdb, 0xff, 0x25, 0xff, 0x48, 0xff, 0xb6, 0xff, 0x48, 0xff, 0x92, 0xff, 0x65, 0xff, 0x92, 0xff, 0x79, 0xff, 0x44, 0xff, 0x3b, 0xff, 0x64, 0xff, 0x9f, 0xff, 0x70, 0xff, 0x8f, 0xff, 0x72, 0xff, 
0xf0, 0xf0, 0xfc, 0xfc, 0xff, 0xff, 0xf1, 0xff, 0xe6, 0xff, 0xc3, 0xff, 0xd1, 0xff, 0xd8, 0xff, 0xdc, 0xff, 0xce, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfd, 0xff, 0xfb, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xef, 0xff, 0xef, 0xff, 0xef, 0xff, 0x6f, 0xff, 0xdf, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 
0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xef, 0xff, 0x67, 0xff, 0xef, 0xff, 0xaa, 0xff, 0xf7, 0xff, 0xb3, 0xff, 0xfb, 0xff, 0xaa, 0xff, 0x5d, 0xff, 0xf4, 0xff, 0x2e, 0xff, 0xf2, 0xff, 0x4f, 0xff, 0xb8, 0xff, 0x67, 0xff, 0x9a, 0xff, 0x75, 0xff, 0x80, 0xff, 0x66, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xd4, 0xff, 0x8a, 0xff, 0x61, 0xff, 0x9e, 0xff, 0x61, 0xff, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 
0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 

// FRAME 01
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0xc0, 0xa0, 0xe0, 0xa0, 0xe0, 0x50, 0xf0, 0xb0, 0xf0, 0x30, 0xf0, 0xf0, 0xf0, 0x70, 0xf0, 0x70, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x30, 0xf0, 0x10, 0xf0, 0x10, 0xf0, 0x10, 0xf0, 
0x18, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x08, 0xf8, 0x18, 0xf8, 0x18, 0xf8, 0x38, 0xf8, 0x58, 0xf8, 0xb8, 0xf8, 0xb8, 0xf8, 0x78, 0xf8, 0x78, 0xf8, 0xfc, 0xfc, 0x0c, 0xfc, 0x64, 0xfc, 0x14, 0xfc, 0x94, 0xfc, 0xc4, 0xfc, 0x64, 0xfc, 0x8c, 0xfc, 0xfc, 0xfc, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x78, 0xf8, 0xbe, 0xfe, 0x4f, 0xff, 0x36, 0xff, 0x19, 0xff, 0x0a, 0xff, 0x01, 0xff, 0x81, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0x3c, 0xff, 0x3c, 0xff, 0x3c, 0xff, 0x1c, 0xff, 0x1e, 0xff, 0x1e, 0xff, 0x1e, 0xff, 0x0e, 0xff, 
0x0e, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x38, 0xff, 0x78, 0xff, 0x78, 0xff, 0x78, 0xff, 0x70, 0xff, 0x70, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xf0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0x80, 0xff, 0x00, 0xff, 0x00, 0xff, 0x03, 0xff, 0x06, 0xff, 0x0d, 0xff, 0x7a, 0xff, 0xc6, 0xff, 0x3c, 0xff, 0xf2, 0xff, 0x0e, 0xff, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0x7c, 0xfc, 0x8f, 0xff, 0xe1, 0xff, 0x1e, 0xff, 0x01, 0xff, 0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0xf0, 0xff, 0xfe, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x1f, 0xff, 0x1f, 0xff, 0x9c, 0xff, 0x9e, 0xff, 0x9e, 0xff, 0x9f, 0xff, 0x8f, 0xff, 0x8f, 0xff, 0x87, 0xff, 0x07, 0xff, 
0x07, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xf0, 0xff, 0xf8, 0xff, 0x7c, 0xff, 0x3e, 0xff, 0x3f, 0xff, 0x1f, 0xff, 0x0f, 0xff, 0x07, 0xff, 0x07, 0xff, 0x03, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x80, 0xff, 0xff, 0xff, 0x00, 0xff, 0xfd, 0xff, 0x57, 0xff, 0x00, 0xff, 0xff, 0xff, 0x6f, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xf0, 0xf0, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x8f, 0xff, 0x3f, 0xff, 0xf8, 0xff, 0xe0, 0xff, 0x80, 0xff, 0x00, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x07, 0xff, 0x07, 0xff, 0x07, 0xff, 0x07, 0xff, 0x03, 0xff, 0x03, 0xff, 0x03, 0xff, 0x03, 0xff, 0x00, 0xff, 
0x00, 0xff, 0x00, 0xff, 0x0e, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x0f, 0xff, 0x1e, 0xff, 0x1e, 0xff, 0x1e, 0xff, 0x1c, 0xff, 0x1c, 0xff, 0x3c, 0xff, 0x3c, 0xff, 0x3c, 0xff, 0x1c, 0xff, 0x80, 0xff, 0xc0, 0xff, 0xc0, 0xff, 0xe0, 0xff, 0x70, 0xff, 0x9c, 0xff, 0x2f, 0xff, 0xd1, 0xff, 0x36, 0xff, 0x2d, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xf7, 0xff, 0x89, 0xff, 0x7f, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xe0, 0xe0, 0xf8, 0xf8, 0x7e, 0xfe, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xf1, 0xff, 0xcf, 0xff, 0x9e, 0xff, 0x7d, 0xff, 0xfb, 0xff, 0xe7, 0xff, 0xce, 0xff, 0xdc, 0xff, 0x9c, 0xff, 0xbc, 0xff, 0x38, 0xff, 0x38, 0xff, 0x38, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x60, 0xff, 0x60, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 
0xe0, 0xff, 0xe0, 0xff, 0x60, 0xff, 0x60, 0xff, 0x70, 0xff, 0x70, 0xff, 0x70, 0xff, 0x30, 0xff, 0x30, 0xff, 0xb8, 0xff, 0xb8, 0xff, 0x58, 0xff, 0xcc, 0xff, 0xac, 0xff, 0xcc, 0xff, 0xf6, 0xff, 0xa2, 0xff, 0xdb, 0xff, 0x25, 0xff, 0x48, 0xff, 0xb6, 0xff, 0x48, 0xff, 0x92, 0xff, 0x65, 0xff, 0x92, 0xff, 0x79, 0xff, 0x44, 0xff, 0x3b, 0xff, 0x64, 0xff, 0x9f, 0xff, 0x70, 0xff, 0x8f, 0xff, 0x72, 0xff, 
0xf0, 0xf0, 0xfc, 0xfc, 0xff, 0xff, 0xf1, 0xff, 0xe6, 0xff, 0xc3, 0xff, 0xd1, 0xff, 0xd8, 0xff, 0xdc, 0xff, 0xce, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xfd, 0xff, 0xfb, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xf7, 0xff, 0xef, 0xff, 0xef, 0xff, 0xef, 0xff, 0x6f, 0xff, 0xdf, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 
0xde, 0xff, 0xde, 0xff, 0xde, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xef, 0xff, 0x67, 0xff, 0xef, 0xff, 0xaa, 0xff, 0xf7, 0xff, 0xb3, 0xff, 0xfb, 0xff, 0xaa, 0xff, 0x5d, 0xff, 0xf4, 0xff, 0x2e, 0xff, 0xf2, 0xff, 0x4f, 0xff, 0xb8, 0xff, 0x67, 0xff, 0x9a, 0xff, 0x75, 0xff, 0x80, 0xff, 0x66, 0xff, 0xc3, 0xff, 0x18, 0xff, 0xd4, 0xff, 0x8a, 0xff, 0x61, 0xff, 0x9e, 0xff, 0x61, 0xff, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 
0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
};
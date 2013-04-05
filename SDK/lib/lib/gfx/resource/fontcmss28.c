//*****************************************************************************
//
// fontcmss28.c - Font definition for the 28 point Cmss font.
//
// Copyright (c) 2008-2010 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 6288 of the Stellaris Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include "../../../api/lcd_def.h"

//*****************************************************************************
//
// Details of this font:
//     Style: cmss
//     Size: 28 point
//     Bold: no
//     Italic: no
//     Memory usage: 3060 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 28 point Cmss font.
//
//*****************************************************************************
static const unsigned char g_pucCmss28Data[2860] =
{
      5,  11,   0,  38,  64,  20,   4, 130,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34, 226,  34, 240,
    240,  18,   9, 240,  50,  50,  34,  50,  49,  65,  34,  50,
     33,  65,  49,  65,   0,  22, 112,  55,  21,   0,   6,  49,
     81, 225,  81, 209,  97, 209,  81, 225,  81, 225,  81, 209,
     81, 225,  81, 225,  81, 127,   4, 129,  81, 225,  81, 225,
     81, 225,  81, 143,   4, 113,  81, 225,  81, 225,  81, 209,
     81, 225,  81, 225,  81, 209,  97, 209,  81, 225,  81,   0,
      6,  80,  42,  13,  82, 178, 151,  89,  51,  18,  34,  34,
     50,  98,  50,  98,  50,  99,  34, 115,  18, 119, 134, 149,
    130,  19, 114,  34, 114,  34, 114,  34, 114,  34,  34,  50,
     18,  73,  87, 146, 178,   0,   8, 112,  68,  21,  36, 145,
    102, 114,  98,  34, 113,  98,  66,  81, 114,  66,  81, 114,
     66,  65, 130,  66,  65, 130,  66,  49, 146,  66,  49, 162,
     34,  49, 196,  65, 240,  65, 240,  81,  68, 177,  66,  18,
    162,  50,  50, 145,  66,  50, 130,  66,  50, 129,  82,  50,
    114,  82,  50, 113,  98,  50,  98, 114,  18, 113, 133,  98,
    147,   0,  13,  80,  47,  19, 240, 240, 211, 245, 226,  34,
    194,  50, 194,  50, 194,  50, 194,  34, 210,  18, 243, 113,
    130, 130,  99, 114,  98,  18,  98,  82,  35,  66,  82,  67,
     50,  82,  83,  18,  98, 100, 115,  69, 136,  23,  84,  70,
      0,  16, 112,  11,   4, 130,  34,  49,  34,  33,  49,   0,
     10,  48,  31,   8,  66,  97,  98,  82,  98,  82,  98,  98,
     97,  98,  98,  98,  98,  98,  98,  98,  98,  98,  98, 114,
     98,  98,  98, 114,  98, 114, 113, 114,  32,  31,   8,   2,
    114,  98, 114,  98, 114,  98,  98, 114,  98,  98,  98,  98,
     98,  98,  98,  98,  98,  98,  98,  82,  98,  98,  82,  98,
     82,  98,  82,  96,  21,  12,  66, 162, 162, 113,  34,  34,
     56, 100, 132, 104,  51,  18,  19,  98, 162, 162,   0,  24,
     96,  41,  19,   0,  12, 113, 240,  49, 240,  49, 240,  49,
    240,  49, 240,  49, 240,  49, 240,  49, 240,  49, 175,   2,
    161, 240,  49, 240,  49, 240,  49, 240,  49, 240,  49, 240,
     49, 240,  49,   0,  13,  16,  11,   4,   0,   9,  66,  34,
     49,  34,  33,  49, 240,   9,   9,   0,  15, 103,  39,   0,
     13,  96,   8,   4,   0,   9,  66,  34, 240, 240,  31,  12,
    145, 177, 161, 177, 177, 161, 177, 177, 161, 177, 177, 161,
    177, 177, 161, 177, 177, 161, 177, 177, 161, 177, 177, 161,
    177, 177, 161, 177, 176,  38,  13, 240, 240, 197, 119,  83,
     51,  66,  82,  65, 114,  34, 114,  34, 114,  34, 114,  34,
    114,  34, 114,  34, 114,  34, 114,  34, 114,  35,  83,  50,
     82,  67,  51,  87, 117,   0,  12,  25,  10, 240, 240,  50,
     85,  82,  18, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130,  88,  40,   0,   9,  29,  12, 240, 240,
    148, 103,  67,  51,  50,  83,  33, 114,  33, 114, 162, 162,
    146, 161, 161, 161, 161, 146, 161, 161, 170,  42,   0,  10,
     96,  29,  12, 240, 240, 148, 103,  67,  66,  49,  98, 162,
    162, 147, 101, 117, 178, 178, 162, 162, 162,  33, 114,  35,
     66,  71, 116,   0,  11,  16,  33,  14,   0,   6,   3, 179,
    164, 161,  18, 146,  18, 130,  34, 130,  34, 114,  50, 114,
     50,  98,  66,  98,  66,  92,  44, 146, 194, 194, 194, 194,
      0,  12, 112,  30,  12, 240, 240, 120,  72,  66, 162, 162,
    162, 162,  19, 104,  67,  50,  66,  82, 162, 162, 162, 162,
     33,  99,  35,  66,  71, 116,   0,  11,  16,  35,  13, 240,
    240, 229, 103,  83, 146, 178, 177,  51,  82,  23,  52,  51,
     51,  83,  34, 114,  34, 114,  34, 114,  34, 114,  49, 114,
     50,  82,  67,  51,  87, 117,   0,  12,  25,  13, 240, 240,
    155,  43, 177, 178, 162, 177, 178, 162, 178, 177, 178, 178,
    178, 162, 178, 178, 178, 178,   0,  12,  48,  36,  13, 240,
    240, 197, 105,  66,  82,  50, 114,  34, 114,  34, 114,  50,
     82,  87, 103,  83,  51,  66,  83,  34, 114,  34, 114,  34,
    114,  35,  98,  51,  51,  87, 117,   0,  12,  36,  13, 240,
    240, 197, 119,  83,  51,  66,  82,  50, 114,  34, 114,  34,
    114,  34, 114,  35,  83,  51,  52,  55,  18,  68,  50, 177,
    178, 163,  65,  67,  87, 116,   0,  12,  32,  12,   4, 240,
    240,  98,  34, 240, 240,  66,  34, 240, 240,  15,   4, 240,
    240,  98,  34, 240, 240,  66,  34,  49,  34,  33,  49, 240,
     20,   4, 240, 210,  34, 226,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34, 160,  13,  19,   0,  26,
     31,   2,   0,   9, 111,   2,   0,  26,  48,  25,  12,   0,
     11,   2, 162,   0,   5,  98, 162, 162, 162, 146, 162, 146,
    146, 146, 162, 162, 163,  82,  57,  70, 240, 208,  25,  11,
    240, 149,  72,  50,  67, 146, 146, 146, 130, 131, 115, 130,
    130, 146, 146, 146, 240, 240, 194, 146,   0,  10,  48,  50,
     17, 240, 240, 166, 153, 115,  83,  83,  54,  67,  56,  50,
     51,  36,  35,  50,  67,  34,  50,  98,  34,  50,  98,  34,
     50,  98,  34,  50,  98,  34,  50,  98,  35,  50,  66,  66,
     51,  35,  67,  54,  99,  52, 132, 113, 106, 150,   0,  15,
     64,  41,  17, 240, 240, 163, 227, 225,  18, 194,  18, 194,
     18, 178,  50, 162,  50, 162,  50, 146,  82, 130,  82, 129,
     98, 123, 107,  98, 114,  82, 146,  66, 146,  66, 147,  34,
    178,  34, 178,   0,  15,  16,  39,  16, 240, 240,  41, 123,
     82, 116,  50, 131,  50, 146,  50, 146,  50, 131,  50, 115,
     74, 107,  82, 115,  66, 146,  50, 162,  34, 162,  34, 162,
     34, 147,  34, 116,  60,  74,   0,  14,  96,  28,  15, 240,
    240, 102, 121,  83,  82,  66, 195, 194, 195, 194, 210, 210,
    210, 210, 211, 210, 211, 210, 227,  82, 105, 118,   0,  13,
     80,  41,  17, 240, 240,  74, 123,  98, 115,  82, 131,  66,
    147,  50, 162,  50, 163,  34, 178,  34, 178,  34, 178,  34,
    178,  34, 178,  34, 178,  34, 162,  50, 162,  50, 146,  66,
    115,  91, 106,   0,  15,  96,  25,  14, 240, 219,  59,  50,
    194, 194, 194, 194, 194, 203,  59,  50, 194, 194, 194, 194,
    194, 194, 204,  44,   0,  12,  64,  25,  13, 240, 187,  43,
     34, 178, 178, 178, 178, 178, 186,  58,  50, 178, 178, 178,
    178, 178, 178, 178, 178,   0,  12,  96,  34,  15, 240, 240,
     86, 137,  83,  82,  66, 129,  51, 194, 195, 194, 210, 210,
    210, 210, 101,  35,  85,  50, 130,  51, 114,  66, 114,  68,
     82, 105, 118,   0,  13,  80,  42,  15, 240, 242, 146,  34,
    146,  34, 146,  34, 146,  34, 146,  34, 146,  34, 146,  34,
    146,  45,  45,  34, 146,  34, 146,  34, 146,  34, 146,  34,
    146,  34, 146,  34, 146,  34, 146,  34, 146,   0,  13,  48,
     23,   4, 130,  34,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34,  34,  34, 240, 240,  26,
     11, 240, 226, 146, 146, 146, 146, 146, 146, 146, 146, 146,
    146, 146, 146, 146, 146, 146,  34,  67,  40,  85,   0,  10,
     16,  44,  16, 240, 240,  34, 146,  50, 130,  66, 114,  82,
     99,  82,  83,  98,  67, 114,  51, 130,  35, 146,  20, 152,
    132,  35, 115,  66, 114,  83,  98,  99,  82, 114,  82, 115,
     66, 130,  66, 146,  50, 147,   0,  14,  32,  25,  12, 240,
    146, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162, 162,
    162, 162, 162, 162, 162, 170,  42,   0,  10,  96,  73,  19,
    240, 240, 131, 179,  36, 148,  36, 148,  36, 148,  34,  18,
    114,  18,  34,  18, 114,  18,  34,  18, 114,  18,  34,  34,
     82,  34,  34,  34,  82,  34,  34,  34,  82,  34,  34,  50,
     50,  50,  34,  50,  50,  50,  34,  50,  50,  50,  34,  66,
     33,  66,  34,  66,  18,  66,  34,  66,  18,  66,  34,  81,
     17,  82,  34,  83,  82,  34,  83,  82,   0,  16, 112,  58,
     16, 240, 240,  36, 130,  36, 130,  37, 114,  34,  18, 114,
     34,  19,  98,  34,  34,  98,  34,  35,  82,  34,  50,  82,
     34,  51,  66,  34,  66,  66,  34,  67,  50,  34,  82,  50,
     34,  83,  34,  34,  98,  34,  34,  99,  18,  34, 114,  18,
     34, 117,  34, 132,  34, 132,   0,  14,  32,  41,  18, 240,
    240, 197, 184, 147,  67, 114, 130,  82, 162,  66, 162,  50,
    194,  34, 194,  34, 194,  34, 194,  34, 194,  34, 194,  35,
    163,  50, 162,  67, 146,  82, 130, 115,  67, 152, 182,   0,
     16,  80,  32,  15, 240, 249, 107,  66, 115,  50, 131,  34,
    146,  34, 146,  34, 146,  34, 131,  34, 115,  59,  73,  98,
    210, 210, 210, 210, 210, 210, 210,   0,  14,  96,  52,  18,
    240, 240, 197, 184, 147,  67, 114, 130,  82, 162,  66, 162,
     50, 194,  34, 194,  34, 194,  34, 194,  34, 194,  34, 194,
     34, 194,  50,  66,  66,  67,  66,  50,  82,  67,  18, 115,
     52, 152, 184, 240,  18, 240,  19, 240,  19, 240,  18,   0,
      7,  16,  40,  15, 240, 249, 107,  66, 115,  50, 131,  34,
    146,  34, 146,  34, 131,  34, 115,  59,  74,  82,  82,  98,
     83,  82,  98,  82,  99,  66, 114,  66, 115,  50, 130,  50,
    146,  34, 146,   0,  13,  48,  28,  14, 240, 240,  37, 121,
     67,  82,  51, 178, 194, 195, 195, 198, 151, 180, 195, 194,
    194, 194,  33, 131,  35,  83,  73, 117,   0,  13,  44,  18,
    240, 240, 111,   1,  47,   1, 146, 240,  18, 240,  18, 240,
     18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,
     18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,
     18, 240,  18,   0,  16, 112,  42,  15, 240, 242, 146,  34,
    146,  34, 146,  34, 146,  34, 146,  34, 146,  34, 146,  34,
    146,  34, 146,  34, 146,  34, 146,  34, 146,  34, 146,  34,
    146,  35, 130,  50, 114,  67,  82, 104, 149,   0,  13, 112,
     42,  18, 240, 240,  98, 179,  34, 178,  51, 162,  66, 146,
     82, 146,  83, 130,  98, 114, 115,  98, 115,  98, 130,  82,
    147,  66, 162,  51, 162,  50, 179,  34, 194,  18, 210,  18,
    213, 227, 243,   0,  16, 112,  71,  26,   0,   6,  67, 131,
    130,  50, 131, 115,  50, 116, 114,  67, 100, 114,  82,  98,
     18,  98,  82,  97,  34,  82,  98,  82,  34,  82,  99,  66,
     34,  82, 114,  66,  50,  66, 114,  65,  66,  50, 131,  34,
     66,  50, 146,  34,  66,  50, 146,  34,  82,  34, 146,  33,
     98,  18, 165,  98,  18, 180,  98,  18, 180, 115, 195, 131,
    195, 131,   0,  23,  80,  41,  17, 240, 240,  67, 146,  67,
    115,  82,  99,  99,  82, 131,  51, 146,  35, 163,  18, 197,
    211, 227, 213, 194,  18, 178,  50, 146,  67, 115,  83,  98,
    114,  83, 115,  51, 147,  34, 178,   0,  15,  16,  42,  18,
    240, 240,  99, 178,  50, 162,  67, 131,  83, 114, 114,  98,
    131,  82, 146,  66, 163,  35, 179,  18, 212, 228, 242, 240,
     18, 240,  18, 240,  18, 240,  18, 240,  18, 240,  18, 240,
     18,   0,  16, 112,  26,  15, 240, 240,  28,  60, 195, 179,
    194, 195, 194, 194, 195, 194, 194, 195, 194, 195, 179, 194,
    195, 204,  45,   0,  13,  48,  31,   6,   4,  36,  34,  66,
     66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,
     66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  68,  36,
     32,  16,   9, 240,  65,  65,  49,  65,  33,  65,  50,  50,
     34,  50,   0,  23, 112,  31,   6,   4,  36,  66,  66,  66,
     66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,  66,
     66,  66,  66,  66,  66,  66,  66,  66,  66,  36,  36,  32,
     15,  11, 240, 163, 129,  17, 113,  34,  82,  50,  50,  82,
      0,  29,  16,   7,   4, 194,  34,   0,  11,  96,  10,   4,
    145,  49,  33,  50,  34,   0,  10,  96,  24,  11,   0,  12,
     85,  87,  65,  67, 146, 146,  86,  56,  35,  66,  34,  82,
     35,  51,  41,  52,  34,   0,   9, 112,  35,  12, 240, 146,
    162, 162, 162, 162, 162, 162, 162,  36,  73,  51,  51,  50,
     83,  34,  98,  34,  98,  34,  98,  34,  98,  34,  83,  35,
     51,  56,  66,  20,   0,  11,  16,  20,  12,   0,  13, 117,
    104,  51,  65,  66, 146, 162, 162, 162, 178, 163,  66,  72,
     85,   0,  11,  36,  12, 240, 240,  34, 162, 162, 162, 162,
    162, 162,  83,  34,  72,  51,  51,  35,  82,  34,  98,  34,
     98,  34,  98,  34,  98,  35,  82,  51,  51,  57,  83,  34,
      0,  10,  96,  21,  12,   0,  13, 117, 103,  67,  51,  49,
     98,  42,  42,  34, 162, 178, 163,  81,  72,  85,   0,  11,
     25,  10, 240, 148,  85,  67, 114, 130, 130, 130, 103,  55,
     82, 130, 130, 130, 130, 130, 130, 130, 130, 130,   0,   9,
     64,  34,  13,   0,  15,   4,  19,  73,  51,  34,  98,  66,
     82,  66,  82,  66,  98,  35,  87,  98,  19, 114, 184,  89,
     51,  83,  34, 114,  35,  83,  57, 101, 240, 240,  16,  37,
     11, 240, 114, 146, 146, 146, 146, 146, 146, 146,  36,  50,
     21,  51,  51,  34,  82,  34,  82,  34,  82,  34,  82,  34,
     82,  34,  82,  34,  82,  34,  82,  34,  82,   0,   9, 112,
     19,   4, 194,  34, 240,  50,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34, 240, 240,  27,   8, 240, 210,  98,
    240, 240, 130,  98,  98,  98,  98,  98,  98,  98,  98,  98,
     98,  98,  98,  98,  33,  50,  37,  67, 240,  80,  36,  12,
    240, 146, 162, 162, 162, 162, 162, 162, 162,  67,  50,  51,
     66,  50,  82,  34,  98,  18, 118,  99,  18,  99,  34,  82,
     51,  66,  66,  66,  82,  50,  83,   0,  10,  96,  23,   4,
    130,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,  34,
     34,  34,  34,  34,  34,  34,  34, 240, 240,  42,  18,   0,
     20,  34,  35,  68,  50,  21,  22,  51,  52,  51,  34,  82,
     82,  34,  82,  82,  34,  82,  82,  34,  82,  82,  34,  82,
     82,  34,  82,  82,  34,  82,  82,  34,  82,  82,  34,  82,
     82,   0,  16,  31,  11,   0,  12,  50,  36,  50,  21,  51,
     51,  34,  82,  34,  82,  34,  82,  34,  82,  34,  82,  34,
     82,  34,  82,  34,  82,  34,  82,   0,   9, 112,  26,  13,
      0,  15,   5, 119,  83,  51,  66,  83,  34, 114,  34, 114,
     34, 114,  34, 114,  35,  83,  51,  51,  87, 117,   0,  12,
     34,  12,   0,  13,  66,  36,  73,  51,  51,  50,  83,  34,
     98,  34,  98,  34,  98,  34,  98,  34,  83,  35,  51,  56,
     66,  20,  82, 162, 162, 162, 162, 240, 240,  64,  33,  12,
      0,  13, 115,  34,  72,  51,  51,  35,  82,  34,  98,  34,
     98,  34,  98,  34,  98,  35,  82,  51,  51,  57,  68,  34,
    162, 162, 162, 162, 162, 240, 176,  21,   8,   0,   9,   2,
     34,  34,  19,  36,  67,  82,  98,  98,  98,  98,  98,  98,
     98,   0,   7,  96,  21,  10,   0,  11,  69,  71,  34,  81,
     34, 131, 133, 101, 146, 130,  34,  66,  39,  84,   0,   9,
     32,  24,  10,   0,   6,  66, 130, 130, 130, 104,  40,  66,
    130, 130, 130, 130, 130, 130, 130,  49,  70,  84,   0,   9,
     16,  30,  11,   0,  12,  50,  82,  34,  82,  34,  82,  34,
     82,  34,  82,  34,  82,  34,  82,  34,  82,  34,  82,  34,
     67,  41,  52,  34,   0,   9, 112,  28,  12,   0,  13,  66,
     98,  34,  98,  34,  83,  50,  66,  66,  66,  67,  34,  98,
     34,  98,  34,  98,  18, 132, 132, 131,   0,  11,  32,  47,
     18,   0,  20,  34,  82,  82,  34,  67,  82,  34,  67,  66,
     51,  49,  18,  50,  66,  49,  18,  50,  66,  34,  18,  50,
     66,  34,  34,  18,  98,  17,  50,  18,  98,  17,  50,  18,
    100,  65,  17, 115,  83, 130,  83,   0,  16,  48,  27,  13,
      0,  14,  98,  98,  51,  66,  83,  34, 114,  19, 132, 162,
    163, 164, 130,  34,  98,  66,  66,  83,  35,  98,   0,  11,
     80,  32,  12,   0,  13,  66,  98,  34,  98,  35,  67,  50,
     66,  67,  50,  82,  34,  98,  34, 114,  18, 116, 132, 146,
    162, 162, 146, 162, 116, 131, 240, 240,  48,  19,  12,   0,
     13,  74,  42, 146, 146, 146, 146, 147, 146, 146, 146, 154,
     42,   0,  10,  96,   9,  15,   0,  24,  61,  45,   0,  24,
     80,  11,  28,   0,  45,  79,  11,  47,  11,   0,  45,  96,
     16,  10, 240, 114,  34,  50,  34,  66,  34,  65,  49,  66,
     34,   0,  26,  96,  12,  11, 240, 240,  67,  50,  55,  50,
     51,   0,  30,  80,
};

//*****************************************************************************
//
// The font definition for the 28 point Cmss font.
//
//*****************************************************************************
const tFont g_sFontCmss28 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    25,

    //
    // The height of the font.
    //
    28,

    //
    // The baseline of the font.
    //
    21,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   25,   43,   98,  140,  208,  255,
         266,  297,  328,  349,  390,  401,  410,  418,
         449,  487,  512,  541,  570,  603,  633,  668,
         693,  729,  765,  777,  792,  812,  825,  850,
         875,  925,  966, 1005, 1033, 1074, 1099, 1124,
        1158, 1200, 1223, 1249, 1293, 1318, 1391, 1449,
        1490, 1522, 1574, 1614, 1642, 1686, 1728, 1770,
        1841, 1882, 1924, 1950, 1981, 1997, 2028, 2043,
        2050, 2060, 2084, 2119, 2139, 2175, 2196, 2221,
        2255, 2292, 2311, 2338, 2374, 2397, 2439, 2470,
        2496, 2530, 2563, 2584, 2605, 2629, 2659, 2687,
        2734, 2761, 2793, 2812, 2821, 2832, 2848,
    },

    //
    // A pointer to the actual font data
    //
    g_pucCmss28Data
};

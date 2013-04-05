//*****************************************************************************
//
// fontcm40b.c - Font definition for the 40 point Cm bold font.
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
//     Style: cm
//     Size: 40 point
//     Bold: yes
//     Italic: no
//     Memory usage: 5056 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 40 point Cm bold font.
//
//*****************************************************************************
static const unsigned char g_pucCm40bData[4855] =
{
      5,  17,   0,  87,  16,  34,  10, 240, 100,  86,  70,  70,
     70,  70,  70,  84, 100, 100, 100, 100, 100, 100, 100, 114,
    130, 130, 130, 130, 240, 240, 116,  86,  70,  70,  70,  84,
      0,  13,  16,  36,  21,   0,   8,   4, 100, 102,  70,  87,
     55,  71,  55,  71,  55,  84,  17,  68,  17, 146, 130, 146,
    130, 145, 145, 146, 130, 145, 145, 146, 130, 130, 130, 145,
    145,   0,  64, 108,  33,   0,  14,  17, 114, 240, 115,  99,
    240,  98, 114, 240, 114,  99, 240,  99,  99, 240,  99,  99,
    240,  98, 114, 240, 114, 114, 240,  99,  99, 240,  99,  99,
    240,  98, 114, 240, 114, 114, 240,  99,  99, 191,  14,  79,
     14, 226,  99, 240,  99,  99, 240,  99,  98, 240, 114, 114,
    240, 114,  99, 240,  99,  99, 240,  99,  98, 239,  14,  79,
     14, 179,  99, 240,  98, 114, 240, 114,  99, 240,  99,  99,
    240,  99,  98, 240, 114, 114, 240, 114,  99, 240,  99,  99,
    240,  99,  98, 240, 114, 114, 240, 114,  99, 240, 114, 114,
      0,  10,  48,  75,  20, 240, 194, 240,  50, 240,  22, 202,
    147,  34,  35, 115,  50,  66,  98,  66,  67,  67,  66,  52,
     67,  66,  37,  67,  66,  37,  68,  50,  37,  69,  34,  51,
     89, 202, 172, 156, 156, 155, 201, 178,  37,  83,  50,  52,
     69,  34,  67,  69,  34,  67,  69,  34,  67,  68,  50,  67,
     81,  82,  66,  98,  66,  51, 115,  34,  35, 154, 198, 240,
     18, 240,  50,   0,  21,  48, 104,  33,  68, 242, 167, 227,
    147,  36, 164, 147,  69, 117, 147,  79,   1, 148,  82,  53,
     19, 164,  82, 132, 164,  82, 131, 180,  82, 115, 196,  82,
    100, 196,  82,  99, 212,  82,  83, 243,  66,  84, 243,  66,
     83, 240,  35,  35,  67, 240,  70,  68, 240, 227, 240, 227,
    102, 240,  36,  83,  35, 240,  19,  83,  66, 243,  99,  66,
    228,  84,  82, 211, 100,  82, 195, 116,  82, 195, 116,  82,
    179, 132,  82, 163, 148,  82, 163, 148,  82, 147, 179,  67,
    131, 195,  66, 147, 211,  35, 131, 231, 161, 240,  36,   0,
     33, 112,  82,  31,   0,   8, 100, 240, 182, 240, 147,  34,
    240, 131,  66, 240, 115,  66, 240, 100,  66, 240, 100,  66,
    240, 100,  66, 240, 100,  50, 240, 116,  50, 240, 117,  18,
    240, 135, 121, 149, 137, 148, 194, 213, 163, 228, 162, 230,
    130, 232, 114, 210,  37,  98, 211,  53,  66, 212,  54,  50,
    197,  69,  34, 213,  87, 229,  87, 229, 102, 129, 101, 102,
     98, 101,  67,  21,  67, 122,  58, 166, 133,   0,  39,  96,
     21,  11, 240, 240,  68, 102,  87,  71,  71,  84,  17, 146,
    146, 145, 146, 145, 146, 130, 145,   0,  34,  44,  14, 240,
    114, 178, 178, 179, 163, 179, 163, 179, 164, 163, 164, 164,
    164, 163, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164,
    164, 164, 164, 180, 164, 164, 179, 180, 164, 179, 195, 179,
    195, 194, 210, 210,  64,  43,  14, 226, 210, 210, 195, 195,
    179, 195, 179, 195, 179, 180, 164, 164, 179, 180, 164, 164,
    164, 164, 164, 164, 164, 164, 164, 164, 164, 163, 164, 164,
    164, 163, 179, 163, 179, 163, 179, 163, 178, 178, 178, 192,
     42,  20, 240, 194, 240,  36, 240,  20, 240,  20, 179,  50,
     51,  85,  34,  37,  85,  18,  21, 138, 198, 230, 188, 117,
     18,  21,  85,  34,  37,  83,  50,  51, 180, 240,  20, 240,
     20, 240,  34,   0,  56,  48,  61,  30,   0,  27,  98, 240,
    210, 240, 210, 240, 210, 240, 210, 240, 210, 240, 210, 240,
    210, 240, 210, 240, 210, 240, 210, 240, 210, 240, 210, 240,
     31,  11,  79,  11, 240,  18, 240, 210, 240, 210, 240, 210,
    240, 210, 240, 210, 240, 210, 240, 210, 240, 210, 240, 210,
    240, 210, 240, 210,   0,  28,  32,  20,  11,   0,  34,  68,
    102,  87,  71,  71,  86, 146, 146, 145, 146, 145, 146, 130,
    145, 240, 240,  11,  15,   0,  37,  75,  75,  75,  75,   0,
     32,  48,  13,  10,   0,  31,  52,  86,  70,  70,  70,  84,
      0,  13,  16,  85,  19, 240, 240,  34, 240,  19, 240,  19,
    240,  18, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19,
    240,  18, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19,
    240,  18, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19,
    240,  18, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19,
    240,  18, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19,
    240,  18, 240,  19, 240,  19, 240,  18, 240,  19, 240,  19,
    240,  18, 240,  32,  59,  20,   0,  10,  86, 210,  67, 163,
     68, 131,  99, 116, 100, 100, 100, 100, 100,  85, 101,  69,
    101,  69, 101,  69, 101,  69, 101,  69, 101,  69, 101,  69,
    101,  69, 101,  69, 101,  69, 101,  69, 101,  69, 101,  84,
    100, 100, 100, 100, 100, 115,  99, 132,  68, 148,  51, 198,
      0,  26,  16,  34,  18,   0,   9, 114, 243, 213, 153, 148,
     20, 228, 228, 228, 228, 228, 228, 228, 228, 228, 228, 228,
    228, 228, 228, 228, 228, 228, 228, 228, 228, 173,  93,   0,
     23,  46,  20,   0,  10,  86, 202, 147,  54, 115,  86,  85,
     70,  86,  70,  70,  70,  70,  70,  70,  70,  84,  86, 230,
    229, 230, 229, 229, 244, 244, 244, 244,  82, 147,  98, 131,
    114, 114, 130, 125, 125, 110,  95,  95,   0,  25,  80,  51,
     20,   0,  10,  86, 202, 147,  69, 130, 100, 117,  69, 101,
     69, 102,  53, 101,  69, 115,  84, 240,  20, 244, 244, 214,
    231, 240,  37, 240,  21, 245, 246,  84,  86,  70,  70,  70,
     70,  70,  70,  70,  69,  99,  86, 100,  69, 139, 183,   0,
     26,  16,  55,  21,   0,  12,   2, 240,  51, 240,  51, 240,
     36, 240,  21, 240,  21, 246, 246, 226,  20, 210,  36, 210,
     36, 194,  52, 178,  68, 178,  68, 162,  84, 161, 100, 146,
    100, 130, 116, 130, 116, 127,   2,  79,   2, 228, 240,  36,
    240,  36, 240,  36, 219, 171,   0,  26,  96,  50,  20,   0,
     10,  33, 161, 131,  99, 140, 139, 154, 169, 183, 210, 240,
     50, 240,  50, 240,  50,  37, 187, 148,  53, 130, 101, 113,
    117, 246, 230, 230,  84,  86,  84,  86,  70,  70,  69,  86,
     84,  85,  98, 102, 115,  54, 153, 198,   0,  26,  32,  57,
     21,   0,  11,  69, 233, 165,  51, 148,  84, 131,  85, 116,
     85, 101,  85, 100, 115, 116, 240,  36, 240,  21,  37, 149,
     24, 119,  53, 102,  85,  85, 101,  85, 102,  69, 102,  69,
    102,  69, 102,  69, 102,  84, 102,  84, 102,  84, 101, 116,
     85, 132,  53, 170, 214,   0,  27,  48,  58,  21,   0,  10,
     82, 240,  79,   1,  95,   1,  95, 110, 110, 115, 131, 114,
    146, 130, 130, 146, 114, 240,  51, 240,  50, 240,  51, 240,
     51, 240,  35, 240,  51, 240,  51, 240,  36, 240,  36, 240,
     36, 240,  21, 240,  21, 240,  21, 240,  21, 240,  21, 240,
     21, 240,  35,   0,  27, 112,  52,  20,   0,  10,  86, 217,
    162,  84, 130, 116,  99, 131,  99, 131,  99, 131, 100, 115,
    102,  83, 103,  51, 139, 154, 186, 186, 141, 115,  40,  99,
     87,  67, 133,  67, 148,  67, 163,  67, 163,  67, 163,  68,
    146,  99, 131, 116,  83, 154, 198,   0,  26,  16,  56,  20,
      0,  10,  86, 201, 164,  67, 148,  68, 116, 100,  85, 100,
     85, 100,  85, 101,  69, 101,  69, 101,  69, 101,  69, 101,
     69, 101,  84, 101,  84,  86, 100,  55, 119,  21, 148,  37,
    244, 240,  20, 115, 100, 101,  83, 117,  68, 116,  83, 131,
     68, 169, 213,   0,  26,  48,  21,  10,   0,  16,  52,  86,
     70,  70,  70,  84,   0,   8,  36,  86,  70,  70,  70,  84,
      0,  13,  16,  28,  10,   0,  16,  52,  86,  70,  70,  70,
     84,   0,   8,  35, 101,  86,  70,  70,  85, 145, 130, 129,
    145, 130, 129, 130, 114, 240, 192,  33,  10,   0,  13, 116,
     86,  70,  70,  70,  84, 240, 240, 114, 130, 130, 130, 130,
    116, 100, 100, 100, 100, 100, 100,  86,  70,  70,  70,  70,
     70,  84, 240, 160,  17,  31,   0,  62,  15,  12,  79,  12,
      0,  27,  95,  12,  79,  12,   0,  54,  96,  49,  19,   0,
     26, 100, 230, 214, 199, 214, 228,   0,   9,  18, 240,  34,
    240,  34, 240,  34, 240,  34, 240,  19, 240,  18, 240,  19,
    240,  19, 228, 229, 228,  99,  85,  85,  69,  85,  69,  85,
     69,  85,  84,  99, 115,  83, 152,   0,   5,  96,  45,  18,
    240, 240, 166, 170, 115,  69,  84,  85,  69,  69,  69,  69,
     69,  69,  83,  85, 197, 212, 212, 227, 243, 227, 243, 242,
    240,  18, 240,  18, 240,  18, 240,  18,   0,   8,  83, 229,
    214, 197, 213, 227,   0,  23,  96,  99,  31,   0,   9,   7,
    240, 109, 240,  36, 117, 212, 180, 179, 243, 162, 240,  34,
    146, 117, 114, 130,  88,  99,  98,  84,  51,  98,  98,  68,
     98,  82,  98,  68, 100,  51,  66,  83, 116,  66,  66,  68,
    116,  66,  66,  68, 116,  66,  66,  68, 116,  66,  66,  68,
    116,  66,  66,  68, 116,  66,  66,  68, 116,  66,  66,  68,
    116,  66,  82,  68, 100,  66,  82,  68, 100,  65,  98,  84,
     54,  50, 114,  88,  23, 130, 117,  53, 162, 240, 242, 240,
     66, 147, 229, 179, 134, 240,  27,   0,  40,  16,  74,  32,
      0,  13,  82, 240, 228, 240, 212, 240, 212, 240, 198, 240,
    182, 240, 183, 240, 152, 240, 152, 240, 146,  22, 240, 115,
     22, 240, 114,  38, 240, 114,  54, 240,  83,  54, 240,  82,
     70, 240,  82,  86, 240,  50, 102, 240,  50, 117, 240,  35,
    118, 240,  31,   1, 240,  31,   1, 243, 150, 226, 166, 226,
    182, 195, 182, 194, 198, 137, 109,  73, 109,   0,  40,  64,
     62,  29,   0,  10, 127,   4, 175,   6, 197, 118, 181, 134,
    165, 150, 149, 150, 149, 150, 149, 150, 149, 150, 149, 149,
    165, 134, 165, 117, 207, 239,   1, 213, 133, 181, 149, 165,
    150, 149, 166, 133, 166, 133, 166, 133, 166, 133, 166, 133,
    166, 133, 150, 149, 150, 149, 134, 111,   7, 127,   5,   0,
     37,  48,  67,  28,   0,  11, 103,  97, 188,  50, 166,  83,
     19, 134, 149, 117, 196, 117, 211, 101, 227,  86, 227,  85,
    240,  18,  85, 240,  18,  70, 240,  18,  70, 240, 118, 240,
    118, 240, 118, 240, 118, 240, 118, 240, 118, 240, 133, 240,
     18,  86, 242,  86, 242, 101, 242, 102, 210, 134, 179, 150,
    147, 183,  84, 236, 240,  71,   0,  36,  48,  63,  32,   0,
     12,  15,   4, 223,   7, 229, 134, 213, 165, 197, 181, 181,
    182, 165, 197, 165, 198, 149, 213, 149, 213, 149, 214, 133,
    214, 133, 214, 133, 214, 133, 214, 133, 214, 133, 214, 133,
    214, 133, 214, 133, 213, 149, 198, 149, 197, 165, 197, 165,
    181, 181, 165, 197, 134, 159,   7, 175,   4,   0,  41,  80,
     73,  28,   0,  10,  79,   6, 127,   7, 166, 117, 166, 147,
    166, 147, 166, 162, 166, 162, 166, 162, 166,  66,  66, 166,
     66,  82, 150,  66, 240,  22,  66, 240,  22,  51, 240,  28,
    240,  28, 240,  22,  51, 240,  22,  66, 240,  22,  66,  98,
    134,  66,  97, 150,  66,  82, 150, 178, 150, 178, 150, 178,
    150, 163, 150, 147, 166, 117, 111,   7, 111,   7,   0,  35,
     96,  60,  26,   0,   9, 111,   6,  95,   6, 150, 116, 150,
    132, 134, 147, 134, 162, 134, 162, 134, 162, 134,  66,  66,
    134,  66,  66, 134,  66, 230,  66, 230,  51, 236, 236, 230,
     51, 230,  66, 230,  66, 230,  66, 230,  66, 230, 240,  86,
    240,  86, 240,  86, 240,  86, 240,  86, 240,  30, 206,   0,
     34,  66,  32,   0,  13,  39,  98, 237,  35, 214, 103, 182,
    150, 166, 181, 165, 212, 149, 243, 134, 243, 134, 243, 133,
    240,  34, 118, 240,  34, 118, 240, 182, 240, 182, 240, 182,
    240, 182, 240, 182, 240, 182, 142,  85, 142,  85, 214, 134,
    198, 149, 198, 150, 182, 166, 166, 182, 150, 199,  88, 236,
     51, 240,  39,  98,   0,  40, 112,  63,  33,   0,  12,  62,
     30,  78,  30, 134, 150, 198, 150, 198, 150, 198, 150, 198,
    150, 198, 150, 198, 150, 198, 150, 198, 150, 198, 150, 198,
    150, 207,   6, 207,   6, 198, 150, 198, 150, 198, 150, 198,
    150, 198, 150, 198, 150, 198, 150, 198, 150, 198, 150, 198,
    150, 198, 150, 142,  30,  78,  30,   0,  41,  96,  34,  18,
      0,   6, 110,  78, 134, 198, 198, 198, 198, 198, 198, 198,
    198, 198, 198, 198, 198, 198, 198, 198, 198, 198, 198, 198,
    198, 198, 198, 198, 142,  78,   0,  23,  58,  22,   0,   8,
    125, 157, 229, 240,  37, 240,  37, 240,  37, 240,  37, 240,
     37, 240,  37, 240,  37, 240,  37, 240,  37, 240,  37, 240,
     37, 240,  37, 240,  37, 240,  37, 240,  37, 240,  37, 240,
     37, 132,  85, 118,  69, 118,  69, 118,  69, 118,  68, 148,
     69, 162,  68, 230,   0,  29,  75,  33,   0,  12,  62,  89,
     94,  89, 150, 195, 198, 179, 214, 163, 230, 147, 246, 131,
    240,  22, 115, 240,  38,  99, 240,  54,  83, 240,  70,  67,
    240,  86,  52, 240,  86,  37, 240,  86,  23, 240,  79, 240,
     56,  22, 240,  55,  54, 240,  38,  86, 240,  22,  86, 240,
     22, 102, 246, 118, 230, 118, 230, 134, 214, 134, 214, 150,
    198, 166, 126,  60,  78,  60,   0,  41,  96,  61,  25,   0,
      9,  63, 175, 230, 240,  70, 240,  70, 240,  70, 240,  70,
    240,  70, 240,  70, 240,  70, 240,  70, 240,  70, 240,  70,
    240,  70, 240,  70, 240,  70, 240,  70, 240,  70, 161, 134,
    146, 134, 146, 134, 146, 134, 146, 134, 131, 134, 131, 134,
    116, 134,  86,  79,   5,  95,   5,   0,  31, 112, 106,  40,
      0,  15,  10, 240,  26,  74, 240,  26, 135, 231, 199, 225,
     21, 194,  21, 194,  21, 194,  21, 194,  21, 194,  21, 193,
     37, 194,  37, 162,  37, 194,  37, 162,  37, 194,  52, 161,
     53, 194,  53, 130,  53, 194,  53, 129,  69, 194,  69,  98,
     69, 194,  69,  98,  69, 194,  69,  97,  85, 194,  85,  66,
     85, 194,  85,  66,  85, 194, 101,  34, 101, 194, 101,  34,
    101, 194, 101,  33, 117, 194, 119, 117, 194, 119, 117, 194,
    118, 133, 194, 133, 133, 194, 133, 133, 194, 147, 149, 138,
     83,  93,  74,  82, 109,   0,  50,  64,  76,  33,   0,  12,
     58, 154,  75, 138, 135, 194, 200, 178, 201, 162, 194,  22,
    162, 194,  38, 146, 194,  39, 130, 194,  55, 114, 194,  70,
    114, 194,  86,  98, 194,  87,  82, 194, 102,  82, 194, 118,
     66, 194, 134,  50, 194, 135,  34, 194, 150,  34, 194, 166,
     18, 194, 169, 194, 184, 194, 199, 194, 214, 194, 214, 194,
    229, 194, 244, 194, 244, 138, 195, 138, 210,   0,  42,  32,
     63,  30,   0,  12,  56, 240,  92, 240,  22,  70, 213, 133,
    181, 165, 149, 197, 133, 197, 118, 198, 101, 229, 101, 229,
     86, 230,  70, 230,  70, 230,  70, 230,  70, 230,  70, 230,
     70, 230,  70, 230,  85, 229, 101, 229, 102, 198, 117, 197,
    134, 181, 149, 165, 181, 133, 214,  70, 240,  28, 240,  88,
      0,  39,  16,  60,  28,   0,  10,  79,   3, 175,   6, 182,
    102, 166, 118, 150, 133, 150, 134, 134, 134, 134, 134, 134,
    134, 134, 134, 134, 134, 134, 133, 150, 118, 150, 102, 175,
      2, 190, 230, 240, 118, 240, 118, 240, 118, 240, 118, 240,
    118, 240, 118, 240, 118, 240, 118, 240, 118, 240,  62, 238,
      0,  36,  96,  86,  30,   0,  12,  56, 240,  93, 246,  70,
    213, 133, 181, 165, 150, 181, 133, 197, 118, 198, 101, 229,
    101, 230,  70, 230,  70, 230,  70, 230,  70, 230,  70, 230,
     70, 230,  70, 230,  70, 230,  85, 229, 101, 229, 102, 198,
    117,  83,  69, 134,  53,  52, 165,  34,  50,  21, 181,  17,
     85, 231,  68, 240,  44,  97, 218,  97, 240,  84,  66, 240,
    100,  50, 240, 105, 240, 105, 240, 105, 240, 119, 240, 135,
    240, 148,   0,   8,  48,  72,  33,   0,  12,  63,   2, 240,
     31,   5, 240,  37, 118, 245, 134, 229, 149, 229, 150, 213,
    150, 213, 150, 213, 150, 213, 150, 213, 149, 229, 134, 229,
    117, 240,  31,   1, 240,  47, 240,  53,  86, 240,  37, 102,
    240,  21, 118, 245, 118, 245, 118, 245, 118, 245, 118, 245,
    119, 229, 119,  66, 133, 134,  66, 133, 134,  66,  77,  86,
     34,  93, 134,   0,  42,  56,  22,   0,   8, 118,  66, 138,
     19, 116,  86, 100, 117,  99, 148,  84, 163,  84, 163,  84,
    178,  85, 162,  86, 145, 105, 236, 174, 158, 158, 172, 233,
    240,  22, 240,  37,  66, 196,  66, 196,  66, 196,  67, 180,
     68, 163,  85, 132,  87,  84,  99,  27, 114,  71,   0,  28,
     80,  72,  30,   0,  11,  63,   9, 111,   9, 100,  86,  69,
     99, 102,  99,  98, 118, 114,  98, 118, 114,  98, 118, 114,
     98, 118, 114,  98, 118, 114,  97, 134, 129,  82, 134, 130,
    230, 240, 150, 240, 150, 240, 150, 240, 150, 240, 150, 240,
    150, 240, 150, 240, 150, 240, 150, 240, 150, 240, 150, 240,
    150, 240, 150, 240, 150, 240,  79,   1, 239,   1,   0,  38,
     80,  63,  33,   0,  12,  62,  90,  78,  90, 134, 210, 198,
    210, 198, 210, 198, 210, 198, 210, 198, 210, 198, 210, 198,
    210, 198, 210, 198, 210, 198, 210, 198, 210, 198, 210, 198,
    210, 198, 210, 198, 210, 198, 210, 198, 210, 198, 210, 213,
    210, 213, 194, 245, 178, 246, 131, 240,  38,  99, 240,  92,
    240, 136,   0,  43,  72,  32,   0,  12,  12, 136,  76, 136,
    118, 226, 182, 195, 182, 194, 198, 179, 214, 162, 230, 162,
    245, 147, 246, 130, 240,  22, 130, 240,  38,  98, 240,  54,
     98, 240,  54,  83, 240,  70,  66, 240,  86,  66, 240, 101,
     51, 240, 102,  34, 240, 118,  34, 240, 136, 240, 152, 240,
    152, 240, 166, 240, 182, 240, 197, 240, 196, 240, 212, 240,
    226,   0,  42,  16, 107,  43,   0,  16,  28,  44,  88,  76,
     44,  88, 118, 134, 178, 166, 134, 178, 181, 150, 162, 182,
    134, 146, 198, 134, 146, 213, 135, 130, 214, 119, 114, 230,
    119, 114, 245,  98,  22,  98, 246,  82,  22,  82, 240,  22,
     82,  22,  82, 240,  37,  66,  54,  66, 240,  38,  50,  54,
     50, 240,  54,  50,  54,  50, 240,  70,  18,  86,  34, 240,
     70,  18,  86,  18, 240,  86,  18,  86,  18, 240, 103, 120,
    240, 103, 119, 240, 119, 119, 240, 133, 150, 240, 133, 149,
    240, 149, 164, 240, 163, 180, 240, 163, 179, 240, 179, 194,
      0,  55,  80,  74,  32,   0,  12,  28,  58, 124,  58, 167,
    131, 246, 130, 240,  38,  99, 240,  38,  83, 240,  70,  66,
    240,  87,  35, 240, 102,  34, 240, 136, 240, 152, 240, 166,
    240, 183, 240, 182, 240, 198, 240, 167, 240, 153, 240, 130,
     23, 240,  99,  38, 240,  98,  70, 240,  66,  86, 240,  51,
    102, 240,  34, 119, 242, 150, 227, 166, 210, 182, 139,  92,
     75,  92,   0,  40,  64,  70,  33,   0,  12,  61, 121,  77,
    121, 134, 210, 199, 179, 214, 178, 246, 146, 240,  22, 131,
    240,  38, 114, 240,  54,  99, 240,  70,  82, 240,  86,  67,
    240, 102,  50, 240, 134,  18, 240, 153, 240, 167, 240, 183,
    240, 197, 240, 213, 240, 213, 240, 213, 240, 213, 240, 213,
    240, 213, 240, 213, 240, 213, 240, 213, 240, 157, 240,  93,
      0,  42,  96,  64,  24,   0,   9,  31,   4,  95,   4,  86,
    102, 100, 134,  99, 134, 114, 150, 114, 134, 130, 119, 130,
    118, 145, 119, 240,  38, 240,  38, 240,  54, 240,  38, 240,
     54, 240,  38, 240,  54, 240,  38, 114, 134, 130, 134, 130,
    118, 146, 118, 146, 102, 147, 102, 147,  86, 148,  86, 118,
     79,   5,  79,   5,   0,  30,  64,  43,  10, 166,  70,  66,
    130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 134,
     70,  64,  35,  21,   0,   8,  50, 130, 130, 130, 130, 130,
    145, 145, 146, 130, 145, 145, 146, 130, 146, 130, 150,  70,
     87,  55,  71,  55,  71,  55,  86,  70, 100, 100,   0,  63,
     80,  43,  10, 166,  70, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130, 130,
    130, 130, 130, 130, 130,  70,  70,  64,  18,  15,   0,   6,
     33, 211, 181, 147,  19, 115,  51,  83,  83,  81, 113,   0,
     58,  96,  13,  10, 240, 240,  20,  86,  70,  70,  70,  84,
      0,  40,  80,  21,  11, 240, 240, 114, 130, 130, 145, 146,
    145, 146, 146, 150,  87,  71,  71,  86, 100,   0,  33,  80,
     42,  22,   0,  36,  24, 211,  68, 165,  68, 149,  83, 148,
    100, 146, 116, 240,  52, 217, 180,  52, 148,  84, 132, 100,
    116, 116, 116, 116, 116, 116, 116, 116, 132,  81,  19, 132,
     65,  38, 118,  69,   0,  28,  64,  25,   0,   9,  55, 240,
     55, 240, 100, 240, 100, 240, 100, 240, 100, 240, 100, 240,
    100, 240, 100, 240, 100, 240, 100,  39, 198,  84, 165, 116,
    148, 132, 148, 148, 132, 149, 116, 149, 116, 149, 116, 149,
    116, 149, 116, 149, 116, 149, 116, 148, 132, 148, 132, 132,
    149, 115, 163,  18,  68, 178,  70,   0,  32,  64,  33,  19,
      0,  31,  86, 186, 117,  68, 100,  69,  85,  69,  84,  99,
     85, 229, 229, 229, 229, 229, 244, 145,  85, 114, 100, 113,
    118,  51, 153, 197,   0,  24,  96,  62,  24,   0,  10,  39,
    240,  39, 240,  84, 240,  84, 240,  84, 240,  84, 240,  84,
    240,  84, 240,  84, 240,  84, 214,  20, 179,  70, 148, 101,
    148, 116, 132, 132, 132, 132, 117, 132, 117, 132, 117, 132,
    117, 132, 117, 132, 117, 132, 132, 132, 132, 132, 133, 116,
    148, 101, 164,  73, 150,  39,   0,  30,  64,  40,  21,   0,
     34, 118, 211,  67, 148,  99, 116, 116, 100, 132,  84, 132,
     69, 132,  79,   2,  79,   2,  69, 240,  21, 240,  21, 240,
     36, 162,  85, 146, 100, 130, 133,  68, 154, 214,   0,  27,
     48,  41,  19,   0,   5, 101, 200, 149,  36, 132,  37, 116,
     53, 116,  53, 116,  81, 148, 244, 244, 244, 218, 154, 180,
    244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244, 244,
    244, 203, 139,   0,  24,  96,  54,  22,   0,  36,  54,  52,
    127, 100,  68,  19,  84,  99,  19,  84, 100, 132, 100, 132,
    100, 132, 100, 132,  99, 164,  68, 171, 177,  38, 194, 240,
     83, 240,  77, 174, 143, 127,  99, 149,  68, 164,  67, 180,
     67, 180,  68, 163, 100, 132, 116, 100, 184,   0,   6,  80,
     65,  25,   0,   9,  55, 240,  55, 240, 100, 240, 100, 240,
    100, 240, 100, 240, 100, 240, 100, 240, 100, 240, 100, 240,
    100,  54, 196,  33,  52, 180,  17,  84, 165, 100, 165, 100,
    164, 116, 164, 116, 164, 116, 164, 116, 164, 116, 164, 116,
    164, 116, 164, 116, 164, 116, 164, 116, 164, 116, 122,  26,
     74,  26,   0,  31,  96,  33,  13, 240, 240, 195, 149, 133,
    133, 133, 147,   0,   7,  55, 103, 148, 148, 148, 148, 148,
    148, 148, 148, 148, 148, 148, 148, 148, 148, 105,  73,   0,
     16,  96,  46,  15,   0,   6,  67, 181, 165, 165, 165, 179,
      0,   8, 102, 150, 180, 180, 180, 180, 180, 180, 180, 180,
    180, 180, 180, 180, 180, 180, 180, 180, 180, 180,  83,  52,
     69,  36,  69,  36,  69,  35,  99,  35, 134, 240, 240, 112,
     62,  24,   0,   9,   7, 240,  39, 240,  84, 240,  84, 240,
     84, 240,  84, 240,  84, 240,  84, 240,  84, 240,  84, 240,
     84,  72, 132,  72, 132,  99, 180,  83, 196,  67, 212,  50,
    244,  34, 240,  20,  20, 249, 250, 228,  37, 212,  52, 212,
     53, 196,  69, 180,  84, 180,  85, 122,  25,  74,  25,   0,
     30,  64,  34,  14, 240, 240, 199, 119, 164, 164, 164, 164,
    164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164, 164,
    164, 164, 164, 164, 164, 164, 164, 164, 122,  74,   0,  18,
     64,  36,   0,  58,  71,  69, 101, 151,  40,  56, 135,  18,
     52,  34,  52, 180,  17,  86,  84, 165, 101, 100, 164, 116,
    116, 164, 116, 116, 164, 116, 116, 164, 116, 116, 164, 116,
    116, 164, 116, 116, 164, 116, 116, 164, 116, 116, 164, 116,
    116, 164, 116, 116, 164, 116, 116, 122,  26,  26,  74,  26,
     26,   0,  45,  64,  45,  25,   0,  40,  87,  69, 151,  33,
     52, 180,  17,  84, 165, 100, 165, 100, 164, 116, 164, 116,
    164, 116, 164, 116, 164, 116, 164, 116, 164, 116, 164, 116,
    164, 116, 164, 116, 164, 116, 122,  26,  74,  26,   0,  31,
     96,  40,  22,   0,  36,  70, 227,  67, 164, 100, 131, 131,
    116, 132, 100, 132,  85, 133,  69, 133,  69, 133,  69, 133,
     69, 133,  69, 133,  84, 132, 100, 132, 116, 100, 133,  69,
    170, 230,   0,  28,  96,  57,  25,   0,  40,  87,  53, 167,
     25, 137,  70, 149, 116, 148, 133, 132, 148, 132, 149, 116,
    149, 116, 149, 116, 149, 116, 149, 116, 149, 116, 149, 116,
    133, 132, 132, 149, 101, 150,  68, 180,  23, 212, 240, 100,
    240, 100, 240, 100, 240, 100, 240, 100, 240,  58, 250,   0,
      8,  16,  59,  24,   0,  39, 101,  66, 184,  50, 165,  50,
     19, 148, 101, 133, 101, 133, 116, 117, 132, 117, 132, 117,
    132, 117, 132, 117, 132, 117, 132, 117, 132, 133, 116, 133,
    116, 148, 101, 164,  70, 198,  36, 240,  84, 240,  84, 240,
     84, 240,  84, 240,  84, 240,  84, 240,  42, 234,   0,   6,
     64,  31,  19,   0,  30, 119,  37,  87,  18,  20, 118,  36,
    117,  52, 117,  52, 116, 244, 244, 244, 244, 244, 244, 244,
    244, 244, 244, 203, 139,   0,  24,  96,  35,  17,   0,  28,
      9, 114,  83,  98, 114,  83, 114,  83, 114,  84, 216, 169,
    139, 137, 183, 212,  66, 131,  66, 131,  67, 115,  67, 114,
     85,  66,  98,  38,   0,  22,  16,  37,  17,   0,  11,  34,
    242, 242, 242, 242, 227, 227, 197, 172,  92, 132, 212, 212,
    212, 212, 212, 212, 212, 212, 212,  66, 116,  66, 116,  66,
    116,  66, 132,  34, 152, 181,   0,  22,  44,  25,   0,  40,
     87,  71, 119,  71, 164, 116, 164, 116, 164, 116, 164, 116,
    164, 116, 164, 116, 164, 116, 164, 116, 164, 116, 164, 116,
    164, 116, 164, 116, 164, 101, 164, 101, 180,  65,  23, 166,
     39,   0,  31,  96,  43,  23,   0,  37,  57,  55,  73,  55,
    116, 115, 149,  98, 165,  98, 180,  82, 197,  66, 197,  66,
    213,  34, 229,  34, 244,  18, 240,  23, 240,  23, 240,  37,
    240,  53, 240,  67, 240,  83, 240,  83,   0,  30,  32,  62,
     31,   0,  50,  56,  40,  39,  72,  40,  39, 101,  84,  99,
    148,  84,  98, 165,  68,  98, 165,  69,  66, 196,  69,  66,
    197,  38,  66, 197,  34,  20,  34, 228,  34,  20,  34, 231,
     36,  34, 231,  54, 240,  22,  54, 240,  21,  70, 240,  36,
     84, 240,  52,  84, 240,  51, 100, 240,  66, 114,   0,  40,
     32,  43,  23,   0,  37,  57,  40,  73,  40, 116,  98, 196,
     66, 213,  35, 228,  34, 240,  22, 240,  37, 240,  69, 240,
     68, 240,  54, 240,  24, 242,  36, 226,  53, 194,  85, 163,
    100, 119,  57,  71,  57,   0,  29,  32,  60,  23,   0,  37,
     57,  55,  73,  55, 101, 114, 164, 114, 165,  82, 196,  82,
    196,  82, 197,  50, 228,  50, 229,  33, 245,  18, 240,  20,
     18, 240,  22, 240,  38, 240,  53, 240,  52, 240,  83, 240,
     82, 240,  98, 240,  98, 226,  66, 228,  50, 228,  49, 244,
     34, 240,  18,  34, 240,  51,   0,   8,  38,  19,   0,  31,
     14,  84,  70,  82, 101,  98,  85, 114,  85, 114,  69, 129,
     69, 229, 213, 213,  66, 133,  66, 117,  82, 102,  82, 101,
     83,  85,  99,  85,  84,  78,  94,   0,  24,  48,  11,  24,
      0,  57,  15,   5,  79,   5,   0,  60,  64,  13,  44,   0,
    104,  79,  15,  10,  79,  15,  10,   0, 110,  64,  22,  16,
    240, 240,  67,  51, 101,  21,  85,  21,  85,  21,  84,  36,
     84,  36,  99,  51, 129,  81,   0,  63,  11,  17,   0,   6,
     84, 204,  91,  82,  69,   0,  73,
};

//*****************************************************************************
//
// The font definition for the 40 point Cm bold font.
//
//*****************************************************************************
const tFont g_sFontCm40b =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    39,

    //
    // The height of the font.
    //
    41,

    //
    // The baseline of the font.
    //
    31,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   39,   75,  183,  258,  362,  444,
         465,  509,  552,  594,  655,  675,  686,  699,
         784,  843,  877,  923,  974, 1029, 1079, 1136,
        1194, 1246, 1302, 1323, 1351, 1384, 1401, 1450,
        1495, 1594, 1668, 1730, 1797, 1860, 1933, 1993,
        2059, 2122, 2156, 2214, 2289, 2350, 2456, 2532,
        2595, 2655, 2741, 2813, 2869, 2941, 3004, 3076,
        3183, 3257, 3327, 3391, 3434, 3469, 3512, 3530,
        3543, 3564, 3606, 3670, 3703, 3765, 3805, 3846,
        3900, 3965, 3998, 4044, 4106, 4140, 4204, 4249,
        4289, 4346, 4405, 4436, 4471, 4508, 4552, 4595,
        4657, 4700, 4760, 4798, 4809, 4822, 4844,
    },

    //
    // A pointer to the actual font data
    //
    g_pucCm40bData
};

/*
 *  lib/api/mmcsd_api.h
 *
 *  Copyright (C) 2013  Iulian Gheorghiu <morgoth.creator@gmail.com>
 *
 *  This file is part of Multiplatform SDK.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MMCSD_API_H_
#define MMCSD_API_H_
/*#####################################################*/
#include "gpio_def.h"
/*#####################################################*/
void mmcsd_init(void *SdStruct, signed int CardDetectPortNr, signed int CardDetectPinNr, new_gpio* StatusLed);
void mmcsd_idle(void *SdStruct);
/*#####################################################*/
#ifdef HEADER_INCLUDE_C_FILES
#include "mmcsd_api.c"
#endif
/*#####################################################*/
#endif /* MMCSD_API_H_ */
/*#####################################################*/

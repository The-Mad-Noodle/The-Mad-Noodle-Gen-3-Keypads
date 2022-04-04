/*
Copyright 2020 The Mad Noodle (Jesse Leventhal)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1701
#define DEVICE_VER      0x0002
#define MANUFACTURER    The Mad Noodle
#define PRODUCT         Noodle Pad v2

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Noodlepad V2 PCB default pin-out */
#define MATRIX_ROW_PINS { F1, D6, D7 }
#define MATRIX_COL_PINS { F0, B5, B6 }
#define UNUSED_PINS

/* RGB BackLight */
#define RGB_DI_PIN B7
#define RGBLED_NUM 4
#define RGBLIGHT_SLEEP
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL

/*Encoders */
#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL
#define VIAL_KEYBOARD_UID {0x88, 0x4A, 0xC0, 0x39, 0xFA, 0x95, 0x2B, 0x21}


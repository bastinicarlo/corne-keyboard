/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define TAPPING_TERM 180
//#define IGNORE_MOD_TAP_INTERRUPT

//#define USE_MATRIX_I2C
//#ifdef KEYBOARD_crkbd_rev1_legacy
//#    undef USE_I2C
//#    define USE_SERIAL
//#endif

/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT
//#define EE_HANDS    

//#define USE_SERIAL_PD2

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_DEFAULT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE
#define SPLIT_OLED_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_ACTIVITY_ENABLE
#define OLED_TIMEOUT 300000
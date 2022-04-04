#include QMK_KEYBOARD_H

/* 
* Default Keymap.c file for Vile GUI Interface
* Download Vile here https://get.vial.today/download/
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_3x3(
      KC_MPRV, LT(2, KC_MUTE), KC_MNXT, 
      KC_MSTP, KC_MPLY, KC_MSEL,
      KC_CALC, KC_MAIL, LT(1, KC_MYCM)
      ),

	[1] = LAYOUT_ortho_3x3(
      RGB_MOD, RGB_TOG, RGB_RMOD, 
      RGB_SPI, RGB_SPD, RGB_VAI, 
      RGB_SAI, RGB_SAD, KC_TRNS
      ),

    [2] = LAYOUT_ortho_3x3(
      KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS
      ),

    [3] = LAYOUT_ortho_3x3(
      KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS, 
      KC_TRNS, KC_TRNS, KC_TRNS
      )
};
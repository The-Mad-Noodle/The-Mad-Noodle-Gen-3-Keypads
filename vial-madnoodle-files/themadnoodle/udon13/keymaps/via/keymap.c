#include QMK_KEYBOARD_H



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [0] = LAYOUT_ortho_3x4(
  		LT(3, KC_MUTE), 
		KC_MPLY, KC_MPRV, KC_MNXT, KC_MSEL, 
		KC_UNDO, KC_CALC, KC_MAIL, KC_MYCM, 
		KC_COPY, KC_CUT, KC_PSTE, TO(1)
        ),
    

    [1] = LAYOUT_ortho_3x4(
		KC_NO, 
		TO(2), TO(3), KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, TO(0)
        ),


    [2] = LAYOUT_ortho_3x4(
		RGB_TOG, 
		RGB_MOD, RGB_HUI, RGB_HUD, RGB_RMOD, 
		RGB_SPI, RGB_SPD, RGB_VAI, RGB_VAD, 
		RGB_SAI, RGB_SAD, RGB_M_T, TO(0)
        ),
  
    [3] = LAYOUT_ortho_3x4(
		KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, TO(0)
        ),

};





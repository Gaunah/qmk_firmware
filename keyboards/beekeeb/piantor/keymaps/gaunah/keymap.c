#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_ESC,
                             KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                             KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LALT,
                             KC_LGUI, MO(1), KC_ENT, KC_SPC, KC_BSPC, MO(2)),

	[1] = LAYOUT_split_3x6_3(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS,
                             KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_PMNS, KC_PEQL, KC_GRV, KC_LBRC, KC_RBRC, KC_PIPE,
                             KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_UNDS, KC_PLUS, KC_TILD, KC_LCBR, KC_RCBR, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	[2] = LAYOUT_split_3x6_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                             KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_INS, KC_NO,
                             KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_DEL, KC_TRNS,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};


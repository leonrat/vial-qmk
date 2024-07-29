// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT (
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,                               KC_Y,      KC_U,    KC_I,       KC_O,       KC_P,       KC_BSPC,
        MO(1),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                               KC_H,      KC_J,    KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,   RGB_TOG,        KC_TRNS,    KC_N,      KC_M,    KC_COMMA,   KC_DOT,     KC_SLSH,    KC_DEL,    KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,                KC_SPC,             KC_ENT,         KC_BSPC,    KC_SPC,    KC_TRNS, MO(2),      KC_ALGR,    KC_RGUI,    KC_RCTL
        


    ),
    [1] = LAYOUT (
        KC_GRV,     KC_1,                   KC_2,               KC_3,           KC_4,       KC_5,                                   KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_EQL,
        MO(1),      KC_KB_VOLUME_UP,        KC_KB_VOLUME_DOWN,  KC_MUTE,        KC_F,       KC_G,                                   KC_HOME,        KC_LBRC,    KC_RBRC,    KC_UP,      KC_NUBS,    KC_END,
        KC_TRNS,    KC_MPLY,                KC_MSTP,            KC_MPRV,        KC_MNXT,    KC_TRNS,   KC_TRNS,         KC_TRNS,    KC_PGUP,        KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_DEL,    KC_RSFT,
        KC_TRNS,    KC_TRNS,                KC_TRNS,            KC_TRNS,        KC_TRNS,    KC_TRNS,   KC_TRNS,         KC_TRNS,    KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS
        
    ),
    
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
};
#endif

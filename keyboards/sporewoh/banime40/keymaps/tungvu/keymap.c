#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x10(
        KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
        KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
        MT(MOD_LSFT,KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, MT(MOD_RSFT,KC_SLSH),
        LT(1,KC_TAB), MT(MOD_LCTL,KC_ESC), MT(MOD_LALT,KC_BSPC), KC_LGUI, KC_SPC, KC_BSPC, MO(1), MO(2), KC_RCTL, KC_ENT
    ),
    [1] = LAYOUT_ortho_4x10(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_EQL, A(KC_LEFT), G(KC_LEFT), G(KC_RGHT), A(KC_RGHT), KC_BSLS,
        KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_MINS, KC_GRV, KC_QUOT, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_ortho_4x10(
        QK_BOOT, KC_TRNS, G(S(KC_3)), G(S(KC_4)), G(S(KC_5)), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_BRID, KC_BRIU, C(KC_DOWN), C(KC_UP), KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_ESC):
            return false;
        default:
            return true;
    }
}

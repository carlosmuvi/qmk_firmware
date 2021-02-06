#include QMK_KEYBOARD_H


// Tap Dance declarations
enum {
 TD_QUOTE_CODE, // quote on single tap, code quote on double tap.
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
 [TD_QUOTE_CODE] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, KC_GRAVE),
};

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_preonic_1x2uC(
        KC_MINS,    KC_1,           KC_2,         KC_3,         KC_4,         KC_5,     KC_6,  KC_7,         KC_8,         KC_9,         KC_0,            KC_EQL,
        KC_TAB,     KC_Q,           KC_W,         KC_E,         KC_R,         KC_T,     KC_Y,  KC_U,         KC_I,         KC_O,         KC_P,            KC_BSLS,
        KC_BSPC,    LSFT_T(KC_A),   LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G,     KC_H,  RGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), TD(TD_QUOTE_CODE),
        KC_LSFT,    KC_Z,           KC_X,         KC_C,         KC_V,         KC_B,     KC_N,  KC_M,         KC_COMM,      KC_DOT,       KC_UP,           KC_ENT,
        KC_ESC,     KC_LCTL,        KC_LALT,      KC_LGUI,      MO(2),        KC_SPC,          MO(1),        KC_SLSH,      KC_LEFT,      KC_DOWN,         KC_RGHT
	),
	[1] = LAYOUT_preonic_1x2uC(
	    KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC,  KC_RBRC,  KC_NO,
	    KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO,
	    KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO,
	    KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO
    ),
    [2] = LAYOUT_preonic_1x2uC(
        KC_NO, KC_F1, KC_F2,   KC_F3,   KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,  KC_F11,
        KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO,   KC_NO,   KC_NO,     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO
    )
};


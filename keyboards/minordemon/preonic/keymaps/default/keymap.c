#include QMK_KEYBOARD_H

enum preonic_layers {
  _COLEMAK,
  _COLEMAKWIN,
  _NUMPAD,
  _LOWER,
  _RAISE,
  _FUNC
};

#define LOWER   LT(_LOWER, KC_SPACE)
#define RAISE   LT(_RAISE, KC_BACKSPACE)
#define FUNC    MO(_FUNC)

#define WIN     DF(_COLEMAKWIN)
#define MAC     DF(_COLEMAK)
#define NUMP    TO(_NUMPAD)
#define TNUMP   MO(_NUMPAD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_ortho_5x12(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQUAL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_Y,    KC_L,    KC_U,    KC_J,    KC_QUOT, KC_MINS,
        KC_LSFT, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_SCLN,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        FUNC,    KC_MEH,  KC_LALT, KC_TAB,  LOWER,   KC_LGUI, KC_ENT,  RAISE,   KC_DEL,  XXXXXXX, XXXXXXX, KC_HYPR
    ),
    [_COLEMAKWIN] = LAYOUT_ortho_5x12(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQUAL,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_Y,    KC_L,    KC_U,    KC_J,    KC_QUOT, KC_MINS,
        KC_LSFT, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_SCLN,
        KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        FUNC,    KC_MEH,  KC_LALT, KC_TAB,  LOWER,   KC_LCTL, KC_ENT,  RAISE,   KC_DEL,  XXXXXXX, XXXXXXX, KC_HYPR
    ),
    [_LOWER] = LAYOUT_ortho_5x12(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX,
        XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, XXXXXXX, KC_LEFT, KC_UP,   KC_DOWN, KC_RIGHT,XXXXXXX,
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  KC_HOME, KC_PGUP, KC_PGDN, KC_END,  XXXXXXX,
        XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, KC_BSPC, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_RAISE] = LAYOUT_ortho_5x12(
        XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        XXXXXXX, XXXXXXX, KC_TILD, KC_HASH, KC_PERC, XXXXXXX, XXXXXXX, KC_EQL,  KC_ASTR, XXXXXXX, KC_DQUO, KC_F12,
        KC_DEL,  KC_AT,   KC_LPRN, KC_LBRC, KC_LCBR, KC_LABK, KC_CIRC, KC_MINS, KC_SLSH, KC_PIPE, KC_DLR,  KC_COLN,
        KC_LSFT, KC_AMPR, KC_RPRN, KC_RBRC, KC_RCBR, KC_RABK, KC_PLUS, KC_UNDS, KC_QUES, KC_EXLM, KC_BSLS, XXXXXXX,
        XXXXXXX, XXXXXXX, _______, _______, KC_SPC,  _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_FUNC] = LAYOUT_ortho_5x12(
        WIN,     MAC,     NUMP,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, TNUMP,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NUM,  XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_NUMPAD] = LAYOUT_ortho_5x12(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_HOME, KC_END,  KC_TAB,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_PGUP, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGDN, KC_KP_4, KC_KP_5, KC_KP_6, KC_ENT,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, KC_INS,  KC_KP_1, KC_KP_2, KC_KP_3, KC_BSPC,
        _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT,KC_LALT, KC_LCTL, KC_LSFT, KC_KP_0, KC_PDOT, KC_DEL,  KC_ESC
    ),
};

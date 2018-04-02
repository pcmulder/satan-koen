#include "satan.h"

#define _BL 0
#define _FL 1

#define _______ KC_TRNS

/*
* Hold ESC or single quote to toggle layer
* Layer + WASD = Move mouse
* Layer + O = Media play/pause
* Layer + I = Increase volume
* Layer + U = Decrease volume
* Layer + Y = Next song
* Layer + T = Previous song
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |~   | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |
   * |-----------------------------------------------------------|
   * |Esc    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Alt |Gui |      Space            |Left|Down|Up |Right |
   * `-----------------------------------------------------------'
   */
[_BL] = KEYMAP_ANSI(
  KC_GRV,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS, \
  LT(1, KC_ESC), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   LT(1, KC_SCLN),KC_QUOT, KC_ENT,  \
  KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT, \
  KC_LCTL,KC_LALT,KC_LGUI,                KC_SPC,                                KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT),

  /* Keymap _FL: Function Layer
   * ,-----------------------------------------------------------.
   * |     |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12| Del |
   * |-----------------------------------------------------------|
   * |S Ins|   |   |Mup|   |   |Prev|Next|V-down|V-up|Play| |  | |
   * |-----------------------------------------------------------|
   * |      |   |Mle|Mdo|Mri|   |   |       |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |     |        |
   * |-----------------------------------------------------------|
   * |    |    |    |      Mouse left   |Home|PageDown|PageUp|End|
   * `-----------------------------------------------------------'
   */
[_FL] = KEYMAP_ANSI(
  _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_DEL  , \
  _______,_______,KC_MS_U,_______,_______,KC_MPRV,KC_MNXT,KC_VOLD,KC_VOLU,KC_MPLY,_______,_______,_______,_______, \
  _______,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,_______, \
  _______,_______,_______,_______,_______,_______,KC_HOME,KC_PGDN,KC_PGUP,KC_END ,_______,_______, \
  _______,_______,KC_BTN2,                KC_BTN1,                        KC_HOME,KC_PGDN,KC_PGUP,KC_END),
};
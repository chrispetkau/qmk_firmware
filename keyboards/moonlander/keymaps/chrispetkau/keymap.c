#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

#include "petkau_macros.inl"

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {129,255,255}, {129,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {193,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {35,255,255}, {215,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {193,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {215,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {193,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {35,255,255}, {215,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {193,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {215,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204} },

    [1] = { {14,255,255}, {14,255,255}, {14,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {129,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {8,233,152}, {35,255,255}, {35,255,255}, {8,233,152}, {193,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {215,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {193,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {215,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152} },

    [2] = { {249,228,255}, {249,228,255}, {249,228,255}, {139,48,169}, {139,48,169}, {249,228,255}, {249,228,255}, {249,228,255}, {139,48,169}, {139,48,169}, {249,228,255}, {249,228,255}, {249,228,255}, {139,48,169}, {139,48,169}, {249,228,255}, {249,228,255}, {249,228,255}, {254,218,204}, {139,48,169}, {14,255,255}, {14,255,255}, {139,48,169}, {193,255,255}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {215,255,255}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {129,255,255}, {129,255,255}, {120,197,142}, {139,48,169}, {139,48,169}, {154,255,255}, {154,255,255}, {154,255,255}, {139,48,169}, {139,48,169}, {154,255,255}, {154,255,255}, {154,255,255}, {139,48,169}, {139,48,169}, {154,255,255}, {154,255,255}, {154,255,255}, {254,218,204}, {139,48,169}, {120,197,142}, {120,197,142}, {154,255,255}, {154,255,255}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {215,255,255}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169}, {139,48,169} },

    [3] = { {14,255,255}, {106,218,204}, {154,255,255}, {106,218,204}, {106,218,204}, {106,218,204}, {163,218,204}, {154,255,255}, {106,218,204}, {106,218,204}, {14,255,255}, {215,255,255}, {154,255,255}, {106,218,204}, {106,218,204}, {106,218,204}, {35,255,255}, {14,255,255}, {254,218,204}, {106,218,204}, {238,220,125}, {238,220,125}, {154,255,255}, {193,255,255}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {215,255,255}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {129,255,255}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {129,255,255}, {105,255,255}, {154,255,255}, {106,218,204}, {106,218,204}, {129,255,255}, {154,255,255}, {154,255,255}, {106,218,204}, {106,218,204}, {129,255,255}, {105,255,255}, {154,255,255}, {254,218,204}, {106,218,204}, {238,220,125}, {35,255,255}, {35,255,255}, {193,255,255}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {215,255,255}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204}, {106,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

#include "petkau_tapping_term.inl"
#include "petkau_tap_dance.inl"

enum custom_keycodes
{
	ST_MACRO_4,
	ST_MACRO_5,
	ST_MACRO_6
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_D)) SS_DELAY(100) SS_RSFT(SS_TAP(X_T)) SS_DELAY(100) SS_RSFT(SS_TAP(X_MINUS)) SS_DELAY(100) SS_RSFT(SS_TAP(X_U)) SS_DELAY(100) SS_RSFT(SS_TAP(X_P)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_D)) SS_DELAY(100) SS_RSFT(SS_TAP(X_T)) SS_DELAY(100) SS_RSFT(SS_TAP(X_MINUS)) SS_DELAY(100) SS_RSFT(SS_TAP(X_D)) SS_DELAY(100) SS_RSFT(SS_TAP(X_O)));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_D)) SS_DELAY(100) SS_LSFT(SS_TAP(X_T)) SS_DELAY(100) SS_LSFT(SS_TAP(X_MINUS)) SS_DELAY(100) SS_LSFT(SS_TAP(X_P)) SS_DELAY(100) SS_LSFT(SS_TAP(X_R)));

    }
    break;
    default: return process_record_petkau(keycode, record);
  }
  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    MT(MOD_LGUI, KC_Q),KC_W,           LT(2,KC_F),     KC_P,           KC_B,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_L,           LT(2,KC_U),     KC_Y,           KC_SCOLON,      
    KC_A,           LT(3,KC_R),     MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),LT(3,KC_I),     KC_O,           
    TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    LT(1,KC_D),     TD(DANCE_3),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_K,           LT(1,KC_H),     KC_COMMA,       KC_DOT,         KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      KC_SPACE,       KC_LALT,                                        KC_RALT,        KC_ENTER,       KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_AT,          KC_LBRACKET,    KC_RBRACKET,    KC_HASH,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_PLUS,        KC_ASTR,        KC_PERC,        
    KC_TAB,         LT(3,KC_QUOTE), TD(DANCE_4),    TD(DANCE_5),    KC_DLR,         KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD,        MT(MOD_RSFT, KC_EQUAL),TD(DANCE_6),    LT(3,KC_MINUS), KC_DQUO,        
    KC_CAPSLOCK,    TO(3),          KC_LCBR,        KC_RCBR,        PETKAU_MACRO_EqualsArrow,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_UNDS,        KC_PIPE,        PETKAU_MACRO_DashArrow,     KC_BSLASH,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          RESET,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           PETKAU_MACRO_True,     
    KC_F5,          LT(3,KC_F6),    MT(MOD_LCTL, KC_F7),MT(MOD_LSFT, KC_F8),KC_PSCREEN,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_MINUS,    MT(MOD_RSFT, KC_4),MT(MOD_RCTL, KC_5),LT(3,KC_6),     PETKAU_MACRO_False,     
    KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_DOT,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    TO(0),          KC_NO,          TO(2),          KC_NO,          ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_6,     KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_NO,          
    RCTL(KC_Z),     RCTL(KC_X),     RCTL(KC_C),     TO(1),          RCTL(KC_V),     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

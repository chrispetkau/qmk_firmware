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
    [0] = { {250,246,223}, {129,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {193,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {35,255,255}, {129,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {193,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {215,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {169,218,204}, {169,218,204}, {129,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {169,218,204}, {129,255,255}, {129,255,255}, {129,255,255}, {193,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {215,255,255}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204}, {169,218,204} },

    [1] = { {250,246,223}, {14,255,255}, {14,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {193,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {8,233,152}, {35,255,255}, {35,255,255}, {8,233,152}, {193,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {215,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {8,233,152}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {254,218,204}, {8,233,152}, {35,255,255}, {35,255,255}, {35,255,255}, {193,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {215,255,255}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152}, {8,233,152} },

    [2] = { {250,246,223}, {0,0,0}, {0,0,0}, {140,52,171}, {140,52,171}, {0,0,0}, {193,255,255}, {0,0,0}, {140,52,171}, {140,52,171}, {0,0,0}, {0,0,0}, {0,0,0}, {140,52,171}, {140,52,171}, {0,0,0}, {0,0,0}, {0,0,0}, {254,218,204}, {140,52,171}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,255}, {140,52,171}, {140,52,171}, {140,52,171}, {140,52,171}, {215,255,255}, {140,52,171}, {140,52,171}, {140,52,171}, {140,52,171}, {140,52,171}, {140,52,171}, {140,52,171}, {154,255,255}, {120,197,142}, {0,0,0}, {140,52,171}, {140,52,171}, {154,255,255}, {154,255,255}, {154,255,255}, {140,52,171}, {140,52,171}, {154,255,255}, {154,255,255}, {154,255,255}, {140,52,171}, {140,52,171}, {154,255,255}, {154,255,255}, {154,255,255}, {254,218,204}, {140,52,171}, {120,197,142}, {120,197,142}, {120,197,142}, {193,255,255}, {140,52,171}, {140,52,171}, {140,52,171}, {140,52,171}, {129,255,255}, {140,52,171}, {140,52,171}, {140,52,171}, {0,0,0}, {0,0,0}, {140,52,171}, {140,52,171} },

    [3] = { {250,246,223}, {0,0,0}, {154,255,255}, {0,0,0}, {106,220,206}, {0,0,0}, {163,218,204}, {154,255,255}, {106,220,206}, {106,220,206}, {0,0,0}, {215,255,255}, {154,255,255}, {106,220,206}, {106,220,206}, {0,0,0}, {35,255,255}, {0,0,0}, {254,218,204}, {106,220,206}, {0,0,0}, {0,0,0}, {154,255,255}, {193,255,255}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {215,255,255}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {129,255,255}, {0,0,0}, {0,0,0}, {106,220,206}, {106,220,206}, {129,255,255}, {105,255,255}, {154,255,255}, {106,220,206}, {106,220,206}, {129,255,255}, {154,255,255}, {154,255,255}, {106,220,206}, {106,220,206}, {129,255,255}, {105,255,255}, {154,255,255}, {254,218,204}, {106,220,206}, {0,0,0}, {35,255,255}, {35,255,255}, {193,255,255}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {215,255,255}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206}, {106,220,206} },

    [4] = { {147,204,217}, {147,204,217}, {147,204,217}, {186,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {186,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {186,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {186,218,204}, {254,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {193,255,255}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {215,255,255}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {186,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {186,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {186,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {254,218,204}, {186,218,204}, {147,204,217}, {147,204,217}, {147,204,217}, {193,255,255}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {215,255,255}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204}, {186,218,204} },

    [5] = { {250,246,223}, {0,0,0}, {0,0,0}, {48,220,194}, {48,220,194}, {0,0,0}, {0,0,0}, {0,0,0}, {48,220,194}, {48,220,194}, {0,0,0}, {0,0,0}, {0,0,0}, {48,220,194}, {48,220,194}, {0,0,0}, {0,0,0}, {0,0,0}, {254,218,204}, {48,220,194}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,255}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194}, {215,255,255}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194}, {0,0,0}, {48,220,194}, {249,228,255}, {249,228,255}, {249,228,255}, {48,220,194}, {48,220,194}, {249,228,255}, {249,228,255}, {249,228,255}, {48,220,194}, {48,220,194}, {249,228,255}, {249,228,255}, {249,228,255}, {48,220,194}, {48,220,194}, {249,228,255}, {249,228,255}, {249,228,255}, {254,218,204}, {48,220,194}, {0,0,0}, {0,0,0}, {0,0,0}, {193,255,255}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194}, {215,255,255}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194}, {48,220,194} },

    [6] = { {250,246,223}, {0,0,0}, {0,0,0}, {31,241,148}, {31,241,148}, {0,0,0}, {0,0,0}, {0,0,0}, {31,241,148}, {31,241,148}, {0,0,0}, {0,0,0}, {0,0,0}, {31,241,148}, {31,241,148}, {250,246,223}, {0,0,0}, {0,0,0}, {0,0,0}, {31,241,148}, {197,226,212}, {197,226,212}, {197,226,212}, {0,0,0}, {31,241,148}, {31,241,148}, {31,241,148}, {0,0,0}, {0,0,0}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {250,246,223}, {0,0,0}, {0,0,0}, {31,241,148}, {31,241,148}, {0,0,0}, {250,246,223}, {0,0,0}, {31,241,148}, {31,241,148}, {0,0,0}, {156,151,130}, {0,0,0}, {31,241,148}, {31,241,148}, {14,255,255}, {250,246,223}, {250,246,223}, {0,0,0}, {31,241,148}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {0,0,0}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148}, {31,241,148} },

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
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    default: return process_record_petkau(keycode, record);
  }
  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    LT(6,KC_Q),     KC_W,           LT(5,KC_F),     LT(2,KC_P),     KC_B,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      
    KC_A,           LT(3,KC_R),     KC_S,           MT(MOD_LSFT, KC_T),KC_G,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_M,           MT(MOD_RSFT, KC_N),KC_E,           KC_I,           KC_O,           
    TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    LT(1,KC_D),     TD(DANCE_3),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_K,           LT(1,KC_H),     KC_COMMA,       KC_DOT,         KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      KC_SPACE,       TD(DANCE_4),                                    MT(MOD_RALT, KC_EQUAL),KC_ENTER,       KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [1] = LAYOUT_moonlander(
    LT(6,KC_ESCAPE),KC_AT,          KC_LBRACKET,    KC_RBRACKET,    KC_HASH,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        PETKAU_MACRO_True,     PETKAU_MACRO_False,     
    KC_TAB,         LT(3,KC_QUOTE), KC_LPRN,        TD(DANCE_5),    KC_DLR,         KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TILD,        TD(DANCE_6),    KC_PLUS,        KC_MINUS,       KC_PERC,        
    KC_CAPSLOCK,    PETKAU_MACRO_Function,     KC_LCBR,        KC_RCBR,        PETKAU_MACRO_EqualsArrow,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_EXLM,        KC_PIPE,        PETKAU_MACRO_DashArrow,     KC_BSLASH,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    MO(6),          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_PLUS,     KC_6,           KC_7,           KC_8,           KC_9,           
    KC_NO,          MO(3),          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_MINUS,    KC_0,           KC_1,           KC_2,           KC_COMMA,       
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_3,           KC_4,           KC_5,           KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    MO(6),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_MEDIA_PLAY_PAUSE,
    KC_NO,          KC_TRANSPARENT, KC_LCTRL,       KC_LSHIFT,      KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_NO,          
    RCTL(KC_Z),     RCTL(KC_X),     RCTL(KC_C),     KC_NO,          RCTL(KC_V),     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    LT(6,KC_Q),     KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           
    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      
    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    MO(6),          KC_LCTRL,       KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          
    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_LSHIFT,      KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          TO(2),          DT_UP,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, RESET,          LGUI(KC_L),     TO(5),          KC_NO,          TO(4),          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          DT_DOWN,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCREEN,     TO(0),          KC_NO,          TO(3),          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          DT_PRNT,     KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          TO(1),          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

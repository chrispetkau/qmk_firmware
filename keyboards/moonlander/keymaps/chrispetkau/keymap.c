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
    [0] = { {188,255,255}, {89,177,177}, {44,230,212}, {89,177,177}, {0,245,245}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {0,245,245}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {89,177,177}, {188,255,255}, {151,255,252}, {89,177,177}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {151,255,252}, {89,177,177}, {151,255,252}, {152,218,204}, {188,255,255}, {228,157,245}, {44,230,212}, {44,230,212}, {0,245,245}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {0,245,245}, {151,255,252}, {228,157,245}, {188,255,255}, {152,218,204}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {89,177,177}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {201,188,198}, {41,255,255}, {188,255,255}, {151,255,252}, {89,177,177}, {89,177,177}, {152,218,204} },

    [1] = { {188,255,255}, {188,255,255}, {188,255,255}, {89,177,177}, {253,244,219}, {188,255,255}, {131,255,255}, {188,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {148,10,212}, {41,255,255}, {188,255,255}, {188,255,255}, {131,255,255}, {89,177,177}, {41,255,255}, {253,244,219}, {188,255,255}, {131,255,255}, {89,177,177}, {188,255,255}, {228,157,245}, {188,255,255}, {253,244,219}, {188,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177}, {188,255,255}, {253,244,219}, {188,255,255}, {188,255,255}, {253,244,219}, {188,255,255}, {253,244,219}, {253,244,219}, {253,244,219}, {253,244,219}, {188,255,255}, {253,244,219}, {53,168,217}, {197,157,154}, {253,244,219}, {188,255,255}, {253,244,219}, {197,157,154}, {197,157,154}, {253,244,219}, {188,255,255}, {253,244,219}, {53,168,217}, {197,157,154}, {228,157,245}, {188,255,255}, {221,204,183}, {9,246,206}, {9,246,206}, {24,245,223}, {253,244,219}, {221,204,183}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177} },

    [2] = { {86,225,94}, {86,225,94}, {86,225,94}, {172,175,176}, {4,211,194}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {117,206,111}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {117,206,111}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {98,124,90}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {4,211,194}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {117,206,111}, {117,206,111}, {98,124,90}, {98,124,90}, {98,124,90}, {98,124,90}, {98,124,90}, {117,206,111}, {86,225,94}, {86,225,94}, {117,206,111}, {4,211,194}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {117,206,111}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {117,206,111}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {117,206,111}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {4,211,194}, {117,206,111}, {172,175,176}, {149,207,200}, {172,175,176}, {13,201,229}, {13,201,229}, {117,206,111}, {98,124,90}, {98,124,90}, {98,124,90}, {98,124,90} },

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
  if (rawhid_state.rgb_control) {
      return;
  }
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
#include "process_record_petkau.inl"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    default: return process_record_petkau(keycode, record);
  }
  return true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TAB,         KC_Q,           KC_W,           KC_F,           TD(DANCE_0),    KC_B,           KC_NO,                                          KC_NO,          KC_J,           KC_L,           KC_U,           TD(DANCE_6),    KC_SCOLON,      KC_BSPACE,      
    KC_EQUAL,       KC_A,           LT(1,KC_R),     MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),TD(DANCE_1),    KC_NO,                                                                          KC_NO,          KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),LT(1,KC_I),     KC_O,           KC_MINUS,       
    KC_TRANSPARENT, TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_D,           TD(DANCE_5),                                    KC_K,           KC_H,           KC_COMMA,       TD(DANCE_7),    TD(DANCE_8),    KC_QUOTE,       
    KC_NO,          KC_NO,          KC_NO,          KC_LALT,        MO(2),          KC_NO,                                                                                                          KC_NO,          MO(2),          KC_RALT,        KC_NO,          KC_NO,          KC_NO,          
    KC_SPACE,       KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_MEDIA_PLAY_PAUSE,KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_L),     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_DELETE,      
    CAPS_WORD,      KC_NO,          KC_TRANSPARENT, KC_LCTRL,       KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_PSCREEN,     
    KC_CAPSLOCK,    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          RESET,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_GRAVE,       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_1,           KC_2,           MT(MOD_LCTL, KC_3),MT(MOD_LSFT, KC_4),KC_5,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_6,           MT(MOD_RSFT, KC_7),MT(MOD_RCTL, KC_8),KC_9,           KC_0,           KC_F12,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          PETKAU_MACRO_DashArrow,     PETKAU_MACRO_EqualsArrow,                                     PETKAU_MACRO_True,     PETKAU_MACRO_False,     KC_LCBR,        KC_RCBR,        KC_BSLASH,      KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

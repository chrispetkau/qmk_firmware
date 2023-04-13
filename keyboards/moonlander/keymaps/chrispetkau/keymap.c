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
    [0] = { {188,255,255}, {89,177,177}, {44,230,212}, {89,177,177}, {0,245,245}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {0,245,245}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {89,177,177}, {188,255,255}, {151,255,252}, {89,177,177}, {151,255,252}, {228,157,245}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {151,255,252}, {89,177,177}, {151,255,252}, {152,218,204}, {188,255,255}, {44,230,212}, {44,230,212}, {188,255,255}, {0,245,245}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {0,245,245}, {151,255,252}, {188,255,255}, {188,255,255}, {152,218,204}, {151,255,252}, {151,255,252}, {188,255,255}, {188,255,255}, {151,255,252}, {89,177,177}, {151,255,252}, {228,157,245}, {188,255,255}, {151,255,252}, {151,255,252}, {151,255,252}, {201,188,198}, {41,255,255}, {188,255,255}, {151,255,252}, {89,177,177}, {89,177,177}, {152,218,204} },

    [1] = { {92,218,204}, {24,245,223}, {173,218,204}, {173,218,204}, {253,244,219}, {92,218,204}, {92,218,204}, {253,244,219}, {92,218,204}, {24,245,223}, {92,218,204}, {253,244,219}, {253,244,219}, {92,218,204}, {0,0,0}, {92,218,204}, {92,218,204}, {253,244,219}, {92,218,204}, {0,0,0}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {221,204,183}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {0,0,0}, {92,218,204}, {92,218,204}, {0,0,0}, {173,218,204}, {173,218,204}, {92,218,204}, {92,218,204}, {173,218,204}, {173,218,204}, {253,244,219}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {221,204,183}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {178,244,175}, {151,255,252}, {0,0,0}, {92,218,204}, {0,0,0}, {173,218,204}, {173,218,204} },

    [2] = { {21,8,239}, {24,245,223}, {89,177,177}, {89,177,177}, {253,244,219}, {21,8,239}, {21,8,239}, {253,244,219}, {21,8,239}, {24,245,223}, {21,8,239}, {253,244,219}, {253,244,219}, {21,8,239}, {0,0,0}, {21,8,239}, {21,8,239}, {253,244,219}, {21,8,239}, {0,0,0}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {228,157,245}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {0,0,0}, {0,0,0}, {21,8,239}, {21,8,239}, {0,0,0}, {89,177,177}, {89,177,177}, {21,8,239}, {21,8,239}, {89,177,177}, {89,177,177}, {253,244,219}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {228,157,245}, {21,8,239}, {21,8,239}, {21,8,239}, {21,8,239}, {178,244,175}, {92,218,204}, {0,0,0}, {21,8,239}, {21,8,239}, {89,177,177}, {89,177,177} },

    [3] = { {188,255,255}, {188,255,255}, {188,255,255}, {89,177,177}, {253,244,219}, {188,255,255}, {253,244,219}, {188,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {253,244,219}, {148,10,212}, {41,255,255}, {188,255,255}, {188,255,255}, {253,244,219}, {89,177,177}, {41,255,255}, {253,244,219}, {188,255,255}, {253,244,219}, {89,177,177}, {188,255,255}, {228,157,245}, {188,255,255}, {253,244,219}, {188,255,255}, {41,255,255}, {188,255,255}, {188,255,255}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177}, {188,255,255}, {253,244,219}, {253,244,219}, {188,255,255}, {253,244,219}, {188,255,255}, {253,244,219}, {188,255,255}, {131,255,255}, {131,255,255}, {188,255,255}, {253,244,219}, {53,168,217}, {197,157,154}, {131,255,255}, {188,255,255}, {253,244,219}, {197,157,154}, {197,157,154}, {131,255,255}, {188,255,255}, {253,244,219}, {53,168,217}, {197,157,154}, {228,157,245}, {188,255,255}, {253,244,219}, {9,246,206}, {9,246,206}, {24,245,223}, {221,204,183}, {221,204,183}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177} },

    [4] = { {139,36,204}, {89,177,177}, {44,230,212}, {89,177,177}, {0,245,245}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {170,204,142}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {170,204,142}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {89,177,177}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {4,223,177}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {170,204,142}, {170,204,142}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177}, {170,204,142}, {44,230,212}, {44,230,212}, {170,204,142}, {0,245,245}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {170,204,142}, {170,204,142}, {139,36,204}, {139,36,204}, {44,230,212}, {170,204,142}, {170,204,142}, {139,36,204}, {139,36,204}, {44,230,212}, {170,204,142}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {4,223,177}, {170,204,142}, {139,36,204}, {139,36,204}, {139,36,204}, {13,201,229}, {13,201,229}, {227,201,229}, {89,177,177}, {89,177,177}, {89,177,177}, {89,177,177} },

    [5] = { {86,225,94}, {86,225,94}, {86,225,94}, {172,175,176}, {4,211,194}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {117,206,111}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {117,206,111}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {98,124,90}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {4,211,194}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {117,206,111}, {117,206,111}, {98,124,90}, {98,124,90}, {98,124,90}, {98,124,90}, {98,124,90}, {117,206,111}, {86,225,94}, {86,225,94}, {117,206,111}, {4,211,194}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {117,206,111}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {117,206,111}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {117,206,111}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {4,211,194}, {117,206,111}, {149,207,200}, {172,175,176}, {172,175,176}, {13,201,229}, {13,201,229}, {117,206,111}, {98,124,90}, {98,124,90}, {98,124,90}, {98,124,90} },

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
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
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
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_PSCREEN,     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TAB,         KC_Q,           KC_W,           KC_F,           TD(DANCE_0),    KC_B,           KC_NO,                                          TD(DANCE_6),    KC_J,           KC_L,           KC_U,           TD(DANCE_7),    KC_SCOLON,      KC_DQUO,        
    KC_EQUAL,       KC_A,           LT(3,KC_R),     MT(MOD_LCTL, KC_S),LT(4,KC_T),     TD(DANCE_1),    KC_ENTER,                                                                       KC_NO,          KC_M,           LT(4,KC_N),     MT(MOD_RCTL, KC_E),LT(3,KC_I),     KC_O,           KC_UNDS,        
    KC_LSHIFT,      TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    LT(5,KC_D),     TD(DANCE_5),                                    KC_K,           LT(5,KC_H),     KC_COMMA,       TD(DANCE_8),    TD(DANCE_9),    KC_NO,          
    TT(3),          KC_NO,          KC_NO,          KC_LALT,        KC_BSPACE,      MT(MOD_LCTL, KC_ESCAPE),                                                                                                MT(MOD_RCTL, KC_ESCAPE),KC_DELETE,      KC_RALT,        KC_NO,          KC_NO,          TT(3),          
    KC_SPACE,       LCTL(KC_LSHIFT),MT(MOD_LALT, KC_TAB),                MT(MOD_RALT, KC_TAB),LALT(KC_LSHIFT),KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_EQUAL,                                       TD(DANCE_10),   KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_QUOTE,       
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    KC_LSHIFT,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_NO,          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_RSHIFT,      
    KC_LCTRL,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_RCTRL,       
    KC_TRANSPARENT, KC_CAPSLOCK,    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_NO,          KC_TRANSPARENT,                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_NO,                                          TD(DANCE_11),   KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_QUOTE,       
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_NO,                                          KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_MINUS,       
    KC_LSHIFT,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_TRANSPARENT,                                                                 KC_NO,          KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_RSHIFT,      
    KC_LCTRL,       KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_RCTRL,       
    KC_TRANSPARENT, KC_CAPSLOCK,    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,                 KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RESET,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 LGUI(KC_L),     KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    CAPS_WORD,      KC_NO,          KC_TRANSPARENT, KC_LCTRL,       KC_LSHIFT,      KC_NO,          KC_TRANSPARENT,                                                                 KC_WWW_REFRESH, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_PSCREEN,     KC_F12,         
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     KC_NO,          LCTL(KC_V),                                     KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_MEDIA_PLAY_PAUSE,RESET,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RSFT(KC_TAB),   LSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_F),     LSFT(KC_P),     LSFT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_J),     LSFT(KC_L),     LSFT(KC_U),     LSFT(KC_Y),     KC_COLN,        KC_QUOTE,       
    KC_PLUS,        LSFT(KC_A),     LSFT(KC_R),     TD(DANCE_12),   LSFT(KC_T),     LSFT(KC_G),     KC_TRANSPARENT,                                                                 KC_CAPSLOCK,    LSFT(KC_M),     LSFT(KC_N),     TD(DANCE_13),   LSFT(KC_I),     LSFT(KC_O),     KC_MINUS,       
    KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_D),     LSFT(KC_V),                                     LSFT(KC_K),     LSFT(KC_H),     KC_PIPE,        PETKAU_MACRO_DashArrow,     KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RSFT(KC_LALT),  KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LSFT(KC_DELETE),LSFT(KC_RALT),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RSFT(KC_TAB),                   RSFT(KC_TAB),   KC_TRANSPARENT, PETKAU_MACRO_Return
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_GRAVE,       
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_LCBR,        KC_RCBR,        PETKAU_MACRO_EqualsArrow,                                     PETKAU_MACRO_True,     PETKAU_MACRO_False,     KC_LABK,        KC_RABK,        KC_BSLASH,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_BSPACE, KC_DELETE, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(3)),
};


extern rgb_config_t rgb_matrix_config;

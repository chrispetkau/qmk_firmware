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

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        ST_MACRO_0,                                     TD(DANCE_9),    KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_1,           KC_0,           KC_DQUO,        
    KC_LPRN,        KC_Q,           KC_W,           TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    ST_MACRO_1,                                     TD(DANCE_10),   KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_RPRN,        
    KC_EQUAL,       KC_A,           LT(4,KC_S),     KC_D,           LT(5,KC_F),     TD(DANCE_3),    KC_ENTER,                                                                       TD(DANCE_11),   KC_H,           LT(6,KC_J),     KC_K,           KC_L,           KC_SCOLON,      KC_UNDS,        
    MT(MOD_LSFT, KC_LBRACKET),TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),                                    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RBRACKET,    
    TT(4),          ST_MACRO_2,     LALT(KC_LSHIFT),LALT(KC_LCTRL), KC_BSPACE,      MT(MOD_LCTL, KC_ESCAPE),                                                                                                MT(MOD_RCTL, KC_ESCAPE),KC_DELETE,      ST_MACRO_3,     ST_MACRO_4,     KC_BSLASH,      TT(4),          
    KC_SPACE,       LCTL(KC_LSHIFT),MT(MOD_LALT, KC_TAB),                MT(MOD_RALT, KC_TAB),ST_MACRO_5,     KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 TD(DANCE_12),   KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_QUOTE,       
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_R,           KC_T,           KC_TRANSPARENT,                                 TD(DANCE_13),   KC_Y,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       
    KC_LSHIFT,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_J,           KC_K,           KC_TRANSPARENT, KC_TRANSPARENT, KC_RSHIFT,      
    KC_LCTRL,       KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RCTRL,       
    KC_TRANSPARENT, KC_CAPSLOCK,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_20),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   KC_TRANSPARENT,                                 TD(DANCE_21),   KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LT(4,KC_R),     KC_S,           LT(7,KC_T),     TD(DANCE_17),   KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_M,           LT(8,KC_N),     KC_E,           KC_I,           KC_O,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_18),   TD(DANCE_19),                                   KC_K,           KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 TD(DANCE_22),   KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_TRANSPARENT,                                 TD(DANCE_23),   KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_MINUS,       
    KC_LSHIFT,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_RSHIFT,      
    KC_LCTRL,       KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RCTRL,       
    KC_TRANSPARENT, KC_CAPSLOCK,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          WEBUSB_PAIR,                                    RESET,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTRL,       KC_LSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_WWW_REFRESH, KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     LCTL(KC_Y),                                     KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TILD,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           ST_MACRO_6,                                     KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_QUOTE,       
    KC_LCBR,        LSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_E),     LSFT(KC_R),     LSFT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_Y),     LSFT(KC_U),     LSFT(KC_I),     LSFT(KC_O),     LSFT(KC_P),     KC_RCBR,        
    KC_PLUS,        LSFT(KC_A),     LSFT(KC_S),     LSFT(KC_D),     KC_TRANSPARENT, LSFT(KC_G),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LSFT(KC_H),     LSFT(KC_J),     LSFT(KC_K),     LSFT(KC_L),     KC_COLN,        KC_MINUS,       
    ST_MACRO_7,     LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_V),     LSFT(KC_B),                                     LSFT(KC_N),     LSFT(KC_M),     KC_LABK,        KC_RABK,        KC_QUES,        ST_MACRO_8,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TILD,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           ST_MACRO_9,                                     KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_QUOTE,       
    KC_LCBR,        RSFT(KC_Q),     RSFT(KC_W),     RSFT(KC_E),     RSFT(KC_R),     RSFT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, RSFT(KC_Y),     RSFT(KC_U),     RSFT(KC_I),     RSFT(KC_O),     RSFT(KC_P),     KC_RCBR,        
    KC_PLUS,        RSFT(KC_A),     RSFT(KC_S),     RSFT(KC_D),     RSFT(KC_F),     RSFT(KC_G),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RSFT(KC_H),     KC_TRANSPARENT, RSFT(KC_K),     RSFT(KC_L),     KC_COLN,        KC_MINUS,       
    ST_MACRO_10,    RSFT(KC_Z),     RSFT(KC_X),     RSFT(KC_C),     RSFT(KC_V),     RSFT(KC_B),                                     RSFT(KC_N),     RSFT(KC_M),     KC_LABK,        KC_RABK,        KC_QUES,        ST_MACRO_11,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TILD,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_QUOTE,       
    KC_LCBR,        LSFT(KC_Q),     LSFT(KC_W),     LSFT(KC_F),     LSFT(KC_P),     LSFT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_J),     LSFT(KC_L),     LSFT(KC_U),     LSFT(KC_Y),     KC_COLN,        KC_RCBR,        
    KC_PLUS,        LSFT(KC_A),     LSFT(KC_R),     LSFT(KC_S),     KC_TRANSPARENT, LSFT(KC_G),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LSFT(KC_M),     LSFT(KC_N),     LSFT(KC_E),     LSFT(KC_I),     LSFT(KC_O),     KC_MINUS,       
    KC_TRANSPARENT, LSFT(KC_Z),     LSFT(KC_X),     LSFT(KC_C),     LSFT(KC_D),     LSFT(KC_V),                                     LSFT(KC_K),     LSFT(KC_H),     KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_TILD,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_QUOTE,       
    KC_LCBR,        RSFT(KC_Q),     RSFT(KC_W),     RSFT(KC_F),     RSFT(KC_P),     RSFT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, RSFT(KC_J),     RSFT(KC_L),     RSFT(KC_U),     RSFT(KC_Y),     KC_COLN,        KC_RCBR,        
    KC_PLUS,        RSFT(KC_A),     RSFT(KC_R),     RSFT(KC_S),     RSFT(KC_T),     RSFT(KC_G),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RSFT(KC_M),     KC_TRANSPARENT, RSFT(KC_E),     RSFT(KC_I),     RSFT(KC_O),     KC_MINUS,       
    KC_TRANSPARENT, RSFT(KC_Z),     RSFT(KC_X),     RSFT(KC_C),     RSFT(KC_D),     RSFT(KC_V),                                     RSFT(KC_K),     RSFT(KC_H),     KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {151,255,252}, {151,255,252}, {151,255,252}, {89,177,177}, {0,245,245}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {0,245,245}, {151,255,252}, {89,177,177}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {89,177,177}, {151,255,252}, {151,255,252}, {89,177,177}, {151,255,252}, {228,157,245}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {178,244,175}, {151,255,252}, {151,255,252}, {89,177,177}, {89,177,177}, {152,218,204}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {0,245,245}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {152,218,204}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {89,177,177}, {151,255,252}, {228,157,245}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {201,188,198}, {41,255,255}, {7,177,177}, {151,255,252}, {178,244,175}, {89,177,177}, {152,218,204} },

    [1] = { {92,218,204}, {24,245,223}, {173,218,204}, {173,218,204}, {253,244,219}, {92,218,204}, {92,218,204}, {253,244,219}, {92,218,204}, {92,218,204}, {92,218,204}, {253,244,219}, {253,244,219}, {92,218,204}, {173,218,204}, {92,218,204}, {92,218,204}, {253,244,219}, {92,218,204}, {173,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {221,204,183}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {173,218,204}, {173,218,204}, {173,218,204}, {92,218,204}, {92,218,204}, {173,218,204}, {173,218,204}, {253,244,219}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {221,204,183}, {92,218,204}, {92,218,204}, {92,218,204}, {92,218,204}, {61,112,227}, {151,255,252}, {92,218,204}, {92,218,204}, {92,218,204}, {173,218,204}, {173,218,204} },

    [2] = { {139,36,204}, {139,36,204}, {139,36,204}, {89,177,177}, {253,244,219}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {178,244,175}, {139,36,204}, {139,36,204}, {0,245,245}, {139,36,204}, {89,177,177}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {89,177,177}, {139,36,204}, {139,36,204}, {89,177,177}, {139,36,204}, {228,157,245}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {178,244,175}, {178,244,175}, {139,36,204}, {139,36,204}, {89,177,177}, {89,177,177}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {253,244,219}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {178,244,175}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {178,244,175}, {139,36,204}, {139,36,204}, {89,177,177}, {139,36,204}, {228,157,245}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {201,188,198}, {61,112,227}, {139,36,204}, {139,36,204}, {178,244,175}, {89,177,177}, {139,36,204} },

    [3] = { {61,112,227}, {61,112,227}, {89,177,177}, {89,177,177}, {253,244,219}, {61,112,227}, {61,112,227}, {253,244,219}, {61,112,227}, {61,112,227}, {61,112,227}, {253,244,219}, {253,244,219}, {61,112,227}, {89,177,177}, {61,112,227}, {61,112,227}, {253,244,219}, {61,112,227}, {89,177,177}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {228,157,245}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {89,177,177}, {89,177,177}, {89,177,177}, {61,112,227}, {61,112,227}, {89,177,177}, {89,177,177}, {253,244,219}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {228,157,245}, {61,112,227}, {61,112,227}, {61,112,227}, {61,112,227}, {139,36,204}, {92,218,204}, {24,245,223}, {61,112,227}, {61,112,227}, {89,177,177}, {89,177,177} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {89,177,177}, {253,244,219}, {253,244,219}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {253,244,219}, {0,0,0}, {0,245,245}, {41,255,255}, {221,204,183}, {253,244,219}, {0,0,0}, {89,177,177}, {41,255,255}, {0,0,0}, {253,244,219}, {0,0,0}, {89,177,177}, {41,255,255}, {0,0,0}, {253,244,219}, {0,0,0}, {0,0,0}, {41,255,255}, {173,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {253,244,219}, {253,244,219}, {0,0,0}, {0,0,0}, {253,244,219}, {253,244,219}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {253,244,219}, {0,0,0}, {53,168,217}, {197,157,154}, {131,255,255}, {253,244,219}, {0,0,0}, {197,157,154}, {197,157,154}, {131,255,255}, {253,244,219}, {0,0,0}, {53,168,217}, {197,157,154}, {0,0,0}, {253,244,219}, {0,0,0}, {9,246,206}, {9,246,206}, {24,245,223}, {0,0,0}, {221,204,183}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252} },

    [6] = { {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {151,255,252}, {178,244,175}, {151,255,252}, {151,255,252} },

    [7] = { {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204} },

    [8] = { {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204}, {139,36,204} },

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
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
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
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_D));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_K));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_1)) SS_DELAY(100) SS_TAP(X_EQUAL));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_RSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_RSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_L));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_L));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_E));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_E));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_L));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_E));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_E));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
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

static tap dance_state[24];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(KC_E); register_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_DOT)); break;
        case DOUBLE_TAP: register_code16(KC_R); register_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_DOT)); break;
        case DOUBLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_F12))); break;
        case DOUBLE_TAP: register_code16(KC_T); register_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_F12))); break;
        case DOUBLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code16(KC_Z); register_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(KC_X); register_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_V); register_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if(state->count > 3) {
        tap_code16(KC_B);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_B); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: register_code16(KC_B); register_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_B); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[9].step = 0;
}
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case DOUBLE_TAP: layer_move(1); break;
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
    }
    dance_state[10].step = 0;
}
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case DOUBLE_TAP: register_code16(KC_CAPSLOCK); break;
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case DOUBLE_TAP: unregister_code16(KC_CAPSLOCK); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: layer_move(3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[12].step = 0;
}
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(KC_F); register_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if(state->count > 3) {
        tap_code16(KC_P);
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_P); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_DOT)); break;
        case DOUBLE_TAP: register_code16(KC_P); register_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_P); register_code16(KC_P);
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_P); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_DOT)); break;
        case DOUBLE_TAP: unregister_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_P); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(qk_tap_dance_state_t *state, void *user_data);
void dance_16_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_16_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_16(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if(state->count > 3) {
        tap_code16(KC_B);
    }
}

void dance_16_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_B); break;
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_F12))); break;
        case DOUBLE_TAP: register_code16(KC_B); register_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_16_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_F12))); break;
        case DOUBLE_TAP: unregister_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_B); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(qk_tap_dance_state_t *state, void *user_data);
void dance_17_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_17_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_17(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_17_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_17_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(qk_tap_dance_state_t *state, void *user_data);
void dance_18_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_18_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_18(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_D);
        tap_code16(KC_D);
        tap_code16(KC_D);
    }
    if(state->count > 3) {
        tap_code16(KC_D);
    }
}

void dance_18_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_D); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_D); register_code16(KC_D); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_D); register_code16(KC_D);
    }
}

void dance_18_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_D); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_D); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_D); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(qk_tap_dance_state_t *state, void *user_data);
void dance_19_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_19_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_19(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_19_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: register_code16(KC_V); register_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_19_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(qk_tap_dance_state_t *state, void *user_data);
void dance_20_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_20_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_20(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_20_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_20_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[20].step = 0;
}
void dance_21_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_21_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_21_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case DOUBLE_TAP: layer_move(3); break;
    }
}

void dance_21_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
    }
    dance_state[21].step = 0;
}
void on_dance_22(qk_tap_dance_state_t *state, void *user_data);
void dance_22_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_22_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_22(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_22_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_22_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[22].step = 0;
}
void dance_23_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_23_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_23_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_23_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
    }
    dance_state[23].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_23_finished, dance_23_reset),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // Reduce the tapping term on all "shift-inverted" keys. We don't actually
    // hold shift for these keys. The software does. Thus, the tapping term can
    // be non-existent. Furthermore, we *want* it to be non-existent so it
    // doesn't persist after tapping.
    case SFT_T(KC_MINS):
    case SFT_T(KC_QUOTE):
    case SFT_T(KC_1):
    case SFT_T(KC_2):
    case SFT_T(KC_3):
    case SFT_T(KC_4):
    case SFT_T(KC_5):
    case SFT_T(KC_6):
    case SFT_T(KC_7):
    case SFT_T(KC_8):
    case SFT_T(KC_9):
    case SFT_T(KC_0):
      return 10;
    default:
      return TAPPING_TERM;
  }
}
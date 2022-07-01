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

enum custom_keycodes
{
    RGB_SLD = ML_SAFE_RANGE,
    ST_MACRO_VOID,
    ST_MACRO_BREAK,
    ST_MACRO_NOT_EQUAL,
    ST_MACRO_EQUALS_ARROW,
    ST_MACRO_DASH_ARROW,
    ST_MACRO_RETURN,
    ST_MACRO_BOOL,
    ST_MACRO_FALSE,
    ST_MACRO_TRUE,
    ST_MACRO_NULLPTR,
    ST_MACRO_CONTINUE,
    ST_MACRO_VIRTUAL,
    ST_MACRO_OVERRIDE,
    ST_MACRO_STATIC,
    ST_MACRO_CLASS,
    ST_MACRO_STRUCT,
    ST_MACRO_NAMESPACE,
    ST_MACRO_INCLUDE,
    ST_MACRO_DEFINE,
    ST_MACRO_IFDEF,
    ST_MACRO_ELSE,
    ST_MACRO_ENDIF,
    ST_MACRO_PUBLIC,
    ST_MACRO_PRIVATE,
    ST_MACRO_TEMPLATE,
    ST_MACRO_TYPENAME,
    ST_MACRO_AUTO,
    ST_MACRO_WHILE,
    ST_MACRO_REINTERPRET_CAST
};

enum tap_dance_codes
{
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
    DANCE_24,
    DANCE_25,
};

enum petkau_layers
{
    PETKAU_LAYER_COLEMAK,
    PETKAU_LAYER_GAMING,
    PETKAU_LAYER_COLEMAK_GAMING,
    PETKAU_LAYER_UTILITY,
    PETKAU_LAYER_LEFT_SHIFT,
    PETKAU_LAYER_RIGHT_SHIFT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [PETKAU_LAYER_COLEMAK] = LAYOUT_moonlander(
        TD(DANCE_0), TD(DANCE_1), TD(DANCE_2), TD(DANCE_3), TD(DANCE_4), TD(DANCE_5), ST_MACRO_VOID, TD(DANCE_15), TD(DANCE_16), TD(DANCE_17), TD(DANCE_18), TD(DANCE_19), TD(DANCE_20), TD(DANCE_21),
        KC_LPRN, KC_Q, KC_W, TD(DANCE_6), TD(DANCE_7), TD(DANCE_8), ST_MACRO_BREAK, TD(DANCE_22), KC_J, KC_L, KC_U, KC_Y, KC_SCOLON, TD(DANCE_23),
        KC_EQUAL, KC_A, LT(3, KC_R), KC_S, LT(PETKAU_LAYER_LEFT_SHIFT, KC_T), TD(DANCE_9), KC_ENTER, CAPS_WORD, KC_M, LT(PETKAU_LAYER_RIGHT_SHIFT, KC_N), KC_E, KC_I, KC_O, KC_UNDS,
        MT(MOD_LSFT, KC_LBRACKET), TD(DANCE_10), TD(DANCE_11), TD(DANCE_12), TD(DANCE_13), TD(DANCE_14), KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH, KC_RBRACKET,
        TT(PETKAU_LAYER_UTILITY), ST_MACRO_EQUALS_ARROW, ST_MACRO_TEMPLATE, LALT(KC_LSHIFT), KC_BSPACE, MT(MOD_LCTL, KC_ESCAPE), MT(MOD_RCTL, KC_ESCAPE), KC_DELETE, ST_MACRO_DASH_ARROW, ST_MACRO_TYPENAME, KC_BSLASH, TT(PETKAU_LAYER_UTILITY),
        KC_SPACE, LCTL(KC_LSHIFT), MT(MOD_LALT, KC_TAB), MT(MOD_RALT, KC_TAB), ST_MACRO_VIRTUAL, KC_ENTER),
    [PETKAU_LAYER_GAMING] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, TD(DANCE_24), KC_6, KC_7, KC_8, KC_9, KC_0, KC_QUOTE,
        KC_TAB, KC_TRANSPARENT, KC_TRANSPARENT, KC_E, KC_R, KC_T, KC_NO, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINUS,
        KC_LSHIFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_RSHIFT,
        KC_LCTRL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RCTRL,
        KC_TRANSPARENT, KC_CAPSLOCK, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET, KC_RBRACKET, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_SPACE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_TRANSPARENT),
    [PETKAU_LAYER_COLEMAK_GAMING] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT, TD(DANCE_25), KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRANSPARENT,
        KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_TRANSPARENT, KC_TRANSPARENT, KC_J, KC_L, KC_U, KC_Y, KC_SCOLON, KC_MINUS,
        KC_LSHIFT, KC_A, KC_R, KC_S, KC_T, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_M, KC_N, KC_E, KC_I, KC_O, KC_RSHIFT,
        KC_LCTRL, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RCTRL,
        KC_TRANSPARENT, KC_CAPSLOCK, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [PETKAU_LAYER_UTILITY] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, RESET, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCTRL, KC_LSHIFT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_REFRESH, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), LCTL(KC_Y), KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_MEDIA_PLAY_PAUSE, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_LGUI, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN, KC_AUDIO_MUTE, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
    [PETKAU_LAYER_LEFT_SHIFT] = LAYOUT_moonlander(
        KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, ST_MACRO_BOOL, ST_MACRO_PUBLIC, KC_CIRC, KC_AMPR, KC_ASTR, ST_MACRO_TRUE, ST_MACRO_FALSE, KC_QUOTE,
        KC_LCBR, LSFT(KC_Q), LSFT(KC_W), LSFT(KC_F), LSFT(KC_P), LSFT(KC_B), ST_MACRO_CONTINUE, ST_MACRO_PRIVATE, LSFT(KC_J), LSFT(KC_L), LSFT(KC_U), LSFT(KC_Y), KC_COLN, KC_RCBR,
        KC_PLUS, LSFT(KC_A), LSFT(KC_R), LSFT(KC_S), KC_TRANSPARENT, LSFT(KC_G), ST_MACRO_STATIC, KC_CAPSLOCK, LSFT(KC_M), LSFT(KC_N), LSFT(KC_E), LSFT(KC_I), LSFT(KC_O), KC_MINUS,
        KC_LABK, LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_D), LSFT(KC_V), LSFT(KC_K), LSFT(KC_H), KC_PIPE, ST_MACRO_DASH_ARROW, KC_QUES, KC_RABK,
        ST_MACRO_REINTERPRET_CAST, ST_MACRO_STRUCT, ST_MACRO_CLASS, ST_MACRO_NAMESPACE, ST_MACRO_NULLPTR, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_INCLUDE, ST_MACRO_DEFINE, ST_MACRO_IFDEF, ST_MACRO_ELSE, ST_MACRO_ENDIF,
        ST_MACRO_AUTO, ST_MACRO_WHILE, LSFT(KC_TAB), LSFT(KC_TAB), ST_MACRO_OVERRIDE, ST_MACRO_RETURN),
    [PETKAU_LAYER_RIGHT_SHIFT] = LAYOUT_moonlander(
        KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, ST_MACRO_BOOL, ST_MACRO_PUBLIC, KC_CIRC, KC_AMPR, KC_ASTR, ST_MACRO_TRUE, ST_MACRO_FALSE, KC_QUOTE,
        KC_LCBR, RSFT(KC_Q), RSFT(KC_W), RSFT(KC_F), RSFT(KC_P), RSFT(KC_B), ST_MACRO_CONTINUE, ST_MACRO_PRIVATE, RSFT(KC_J), RSFT(KC_L), RSFT(KC_U), RSFT(KC_Y), KC_COLN, KC_RCBR,
        KC_PLUS, RSFT(KC_A), RSFT(KC_R), RSFT(KC_S), RSFT(KC_T), RSFT(KC_G), ST_MACRO_STATIC, KC_CAPSLOCK, RSFT(KC_M), KC_TRANSPARENT, RSFT(KC_E), RSFT(KC_I), RSFT(KC_O), KC_MINUS,
        KC_LABK, RSFT(KC_Z), RSFT(KC_X), RSFT(KC_C), RSFT(KC_D), RSFT(KC_V), RSFT(KC_K), RSFT(KC_H), KC_PIPE, ST_MACRO_DASH_ARROW, KC_QUES, KC_RABK,
        ST_MACRO_REINTERPRET_CAST, ST_MACRO_STRUCT, ST_MACRO_CLASS, ST_MACRO_NAMESPACE, ST_MACRO_NULLPTR, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_INCLUDE, ST_MACRO_DEFINE, ST_MACRO_IFDEF, ST_MACRO_ELSE, ST_MACRO_ENDIF,
        ST_MACRO_AUTO, ST_MACRO_WHILE, RSFT(KC_TAB), RSFT(KC_TAB), ST_MACRO_OVERRIDE, ST_MACRO_RETURN),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void)
{
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [PETKAU_LAYER_COLEMAK] = {{151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {89, 177, 177}, {0, 245, 245}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {178, 244, 175}, {151, 255, 252}, {151, 255, 252}, {0, 245, 245}, {151, 255, 252}, {89, 177, 177}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {89, 177, 177}, {151, 255, 252}, {151, 255, 252}, {89, 177, 177}, {151, 255, 252}, {228, 157, 245}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {178, 244, 175}, {178, 244, 175}, {151, 255, 252}, {151, 255, 252}, {89, 177, 177}, {89, 177, 177}, {152, 218, 204}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {0, 245, 245}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {178, 244, 175}, {151, 255, 252}, {152, 218, 204}, {151, 255, 252}, {151, 255, 252}, {178, 244, 175}, {151, 255, 252}, {151, 255, 252}, {89, 177, 177}, {151, 255, 252}, {228, 157, 245}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {151, 255, 252}, {201, 188, 198}, {41, 255, 255}, {7, 177, 177}, {151, 255, 252}, {178, 244, 175}, {89, 177, 177}, {152, 218, 204}},

    [PETKAU_LAYER_GAMING] = {{92, 218, 204}, {24, 245, 223}, {173, 218, 204}, {173, 218, 204}, {253, 244, 219}, {92, 218, 204}, {92, 218, 204}, {253, 244, 219}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {253, 244, 219}, {253, 244, 219}, {92, 218, 204}, {173, 218, 204}, {92, 218, 204}, {92, 218, 204}, {253, 244, 219}, {92, 218, 204}, {173, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {221, 204, 183}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {173, 218, 204}, {173, 218, 204}, {173, 218, 204}, {92, 218, 204}, {92, 218, 204}, {173, 218, 204}, {173, 218, 204}, {253, 244, 219}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {221, 204, 183}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {61, 112, 227}, {151, 255, 252}, {92, 218, 204}, {92, 218, 204}, {92, 218, 204}, {173, 218, 204}, {173, 218, 204}},

    [PETKAU_LAYER_COLEMAK_GAMING] = {{61, 112, 227}, {61, 112, 227}, {89, 177, 177}, {89, 177, 177}, {253, 244, 219}, {61, 112, 227}, {61, 112, 227}, {253, 244, 219}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {253, 244, 219}, {253, 244, 219}, {61, 112, 227}, {89, 177, 177}, {61, 112, 227}, {61, 112, 227}, {253, 244, 219}, {61, 112, 227}, {89, 177, 177}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {228, 157, 245}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {89, 177, 177}, {89, 177, 177}, {89, 177, 177}, {61, 112, 227}, {61, 112, 227}, {89, 177, 177}, {89, 177, 177}, {253, 244, 219}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {228, 157, 245}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {61, 112, 227}, {139, 36, 204}, {92, 218, 204}, {24, 245, 223}, {61, 112, 227}, {61, 112, 227}, {89, 177, 177}, {89, 177, 177}},

    [PETKAU_LAYER_UTILITY] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {89, 177, 177}, {253, 244, 219}, {253, 244, 219}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255}, {0, 0, 0}, {253, 244, 219}, {0, 0, 0}, {0, 245, 245}, {41, 255, 255}, {221, 204, 183}, {253, 244, 219}, {0, 0, 0}, {89, 177, 177}, {41, 255, 255}, {0, 0, 0}, {253, 244, 219}, {0, 0, 0}, {89, 177, 177}, {41, 255, 255}, {0, 0, 0}, {253, 244, 219}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255}, {173, 218, 204}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {253, 244, 219}, {253, 244, 219}, {0, 0, 0}, {0, 0, 0}, {253, 244, 219}, {253, 244, 219}, {0, 0, 0}, {0, 0, 0}, {131, 255, 255}, {131, 255, 255}, {253, 244, 219}, {0, 0, 0}, {53, 168, 217}, {197, 157, 154}, {131, 255, 255}, {253, 244, 219}, {0, 0, 0}, {197, 157, 154}, {197, 157, 154}, {131, 255, 255}, {253, 244, 219}, {0, 0, 0}, {53, 168, 217}, {197, 157, 154}, {0, 0, 0}, {253, 244, 219}, {0, 0, 0}, {9, 246, 206}, {9, 246, 206}, {24, 245, 223}, {0, 0, 0}, {221, 204, 183}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [PETKAU_LAYER_LEFT_SHIFT] = {{139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}},

    [PETKAU_LAYER_RIGHT_SHIFT] = {{139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}, {139, 36, 204}},

};

void set_layer_color(int layer)
{
    for (int i = 0; i < DRIVER_LED_TOTAL; i++)
    {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v)
        {
            rgb_matrix_set_color(i, 0, 0, 0);
        }
        else
        {
            RGB rgb = hsv_to_rgb(hsv);
            float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

void rgb_matrix_indicators_user(void)
{
    if (keyboard_config.disable_layer_led)
    {
        return;
    }
    uint8_t const active_layer = biton32(layer_state);
    switch (active_layer)
    {
    case PETKAU_LAYER_COLEMAK:
    case PETKAU_LAYER_GAMING:
    case PETKAU_LAYER_COLEMAK_GAMING:
    case PETKAU_LAYER_UTILITY:
    case PETKAU_LAYER_LEFT_SHIFT:
    case PETKAU_LAYER_RIGHT_SHIFT:
        set_layer_color(active_layer);
        break;
    default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE)
            rgb_matrix_set_color_all(0, 0, 0);
        break;
    }
}

typedef struct
{
    bool is_press_action;
    uint8_t step;
} tap;

enum
{
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[26];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state)
{
    if (state->count == 1)
    {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    }
    else if (state->count == 2)
    {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
        tap_code16(KC_GRAVE);
    }
    if(state->count > 3) {
        tap_code16(KC_GRAVE);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_GRAVE); register_code16(KC_GRAVE);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_GRAVE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(KC_F); register_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if(state->count > 3) {
        tap_code16(KC_P);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_P); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_DOT)); break;
        case DOUBLE_TAP: register_code16(KC_P); register_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_P); register_code16(KC_P);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_P); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_DOT)); break;
        case DOUBLE_TAP: unregister_code16(KC_P); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_P); break;
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
        case SINGLE_HOLD: register_code16(LALT(LSFT(KC_F12))); break;
        case DOUBLE_TAP: register_code16(KC_B); register_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case SINGLE_HOLD: unregister_code16(LALT(LSFT(KC_F12))); break;
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
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code16(KC_Z); register_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(qk_tap_dance_state_t *state, void *user_data);
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(KC_X); register_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_D);
        tap_code16(KC_D);
        tap_code16(KC_D);
    }
    if(state->count > 3) {
        tap_code16(KC_D);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_D); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_D); register_code16(KC_D); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_D); register_code16(KC_D);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_D); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_D); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_D); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: register_code16(KC_V); register_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(qk_tap_dance_state_t *state, void *user_data);
void dance_16_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_16_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_16(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_16_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_16_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(qk_tap_dance_state_t *state, void *user_data);
void dance_17_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_17_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_17(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_17_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_17_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(qk_tap_dance_state_t *state, void *user_data);
void dance_18_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_18_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_18(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_18_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_18_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(qk_tap_dance_state_t *state, void *user_data);
void dance_19_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_19_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_19(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_19_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case SINGLE_HOLD: register_code16(KC_F9); break;
        case DOUBLE_TAP: register_code16(KC_9); register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_19_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case SINGLE_HOLD: unregister_code16(KC_F9); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(qk_tap_dance_state_t *state, void *user_data);
void dance_20_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_20_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_20(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_20_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case SINGLE_HOLD: register_code16(KC_F10); break;
        case DOUBLE_TAP: register_code16(KC_0); register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_20_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case SINGLE_HOLD: unregister_code16(KC_F10); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(qk_tap_dance_state_t *state, void *user_data);
void dance_21_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_21_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_21(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
    }
    if(state->count > 3) {
        tap_code16(KC_DQUO);
    }
}

void dance_21_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_DQUO); break;
        case SINGLE_HOLD: register_code16(KC_F11); break;
        case DOUBLE_TAP: register_code16(KC_DQUO); register_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DQUO); register_code16(KC_DQUO);
    }
}

void dance_21_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_DQUO); break;
        case SINGLE_HOLD: unregister_code16(KC_F11); break;
        case DOUBLE_TAP: unregister_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DQUO); break;
    }
    dance_state[21].step = 0;
}
void dance_22_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_22_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_22_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_22_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
    }
    dance_state[22].step = 0;
}
void on_dance_23(qk_tap_dance_state_t *state, void *user_data);
void dance_23_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_23_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_23(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
        tap_code16(KC_RPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_RPRN);
    }
}

void dance_23_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_RPRN); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(KC_RPRN); register_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RPRN); register_code16(KC_RPRN);
    }
}

void dance_23_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_RPRN); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(KC_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RPRN); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(qk_tap_dance_state_t *state, void *user_data);
void dance_24_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_24_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_24(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_24_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_24_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(qk_tap_dance_state_t *state, void *user_data);
void dance_25_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_25_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_25(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_25_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_TAP: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_25_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[25].step = 0;
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
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
};

#include "chrispetkau.inl"
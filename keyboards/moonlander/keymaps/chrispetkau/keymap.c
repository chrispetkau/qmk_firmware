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
    ST_MACRO_ENUM,
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
        TD(DANCE_0), TD(DANCE_1), TD(DANCE_2), TD(DANCE_3), TD(DANCE_4), TD(DANCE_5), ST_MACRO_VOID, KC_PSCREEN, TD(DANCE_13), TD(DANCE_14), TD(DANCE_15), TD(DANCE_16), TD(DANCE_17), TD(DANCE_18),
        KC_LPRN, KC_Q, KC_W, KC_F, TD(DANCE_6), KC_B, ST_MACRO_BREAK, TD(DANCE_19), KC_J, KC_L, KC_U, KC_Y, KC_SCOLON, TD(DANCE_20),
        KC_EQUAL, KC_A, LT(3, KC_R), KC_S, LT(4, KC_T), TD(DANCE_7), KC_ENTER, CAPS_WORD, KC_M, LT(5, KC_N), KC_E, KC_I, KC_O, KC_UNDS,
        MT(MOD_LSFT, KC_LBRACKET), TD(DANCE_8), TD(DANCE_9), TD(DANCE_10), TD(DANCE_11), TD(DANCE_12), KC_K, KC_H, KC_COMMA, KC_DOT, TD(DANCE_21), KC_RBRACKET,
        TT(3), ST_MACRO_EQUALS_ARROW, LALT(KC_LSHIFT), RALT(KC_LCTRL), KC_BSPACE, MT(MOD_LCTL, KC_ESCAPE), MT(MOD_RCTL, KC_ESCAPE), KC_DELETE, ST_MACRO_DASH_ARROW, ST_MACRO_TYPENAME, KC_BSLASH, TT(3),
        KC_SPACE, LCTL(KC_LSHIFT), MT(MOD_LALT, KC_TAB), MT(MOD_RALT, KC_TAB), ST_MACRO_VIRTUAL, KC_ENTER),
    [PETKAU_LAYER_GAMING] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, TD(DANCE_22), KC_6, KC_7, KC_8, KC_9, KC_0, KC_QUOTE,
        KC_TAB, KC_TRANSPARENT, KC_TRANSPARENT, KC_E, KC_R, KC_T, KC_NO, KC_TRANSPARENT, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINUS,
        KC_LSHIFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_TRANSPARENT, KC_TRANSPARENT, KC_H, KC_J, KC_K, KC_L, KC_SCOLON, KC_RSHIFT,
        KC_LCTRL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RCTRL,
        KC_TRANSPARENT, KC_CAPSLOCK, KC_NO, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRACKET, KC_RBRACKET, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_SPACE, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO, KC_TRANSPARENT),
    [PETKAU_LAYER_COLEMAK_GAMING] = LAYOUT_moonlander(
        KC_TRANSPARENT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRANSPARENT, TD(DANCE_23), KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRANSPARENT,
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

/// Override to zero out tapping term for shift-inverted keys.
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
    // Reduce the tapping term on all "shift-inverted" keys. We don't actually
    // hold shift for these keys. The software does. Thus, the tapping term can
    // be non-existent. Furthermore, we *want* it to be non-existent so it
    // doesn't persist after tapping.
    case SFT_T(KC_MINS):
    case SFT_T(KC_QUOTE):
        return 0;
    default:
        return TAPPING_TERM;
    }
}

#include "petkau_tap_dance.inl"
#include "petkau_macro.inl"
/*
Need a program which will...
- parse the config.h and keymap.c as produced by the ZSA configurator
- take as additional input a list of macro names. This list needs to be explicitly, meticulously remapped any time
any macros are added, removed, or changed in the configurator
- take as additional input a list of layer names, again explicitly mapped
- exports a config.h and keymap.c suitable for consumption by the QMK compiler
*/

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

#define PETKAU_DELAY SS_DELAY(0)

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
  case ST_MACRO_VOID:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_D));
    }
    break;
  case ST_MACRO_BREAK:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_K));
    }
    break;
  case ST_MACRO_NOT_EQUAL:
    if (record->event.pressed)
    {
      SEND_STRING(SS_RSFT(SS_TAP(X_1)) PETKAU_DELAY SS_TAP(X_EQUAL));
    }
    break;
  case ST_MACRO_EQUALS_ARROW:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_EQUAL) PETKAU_DELAY SS_RSFT(SS_TAP(X_DOT)));
    }
    break;
  case ST_MACRO_DASH_ARROW:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_MINUS) PETKAU_DELAY SS_RSFT(SS_TAP(X_DOT)));
    }
    break;
  case ST_MACRO_RETURN:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_N));
    }
    break;
  case ST_MACRO_BOOL:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_L));
    }
    break;
  case ST_MACRO_FALSE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_TRUE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_NULLPTR:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R));
    }
    break;
  case ST_MACRO_CONTINUE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_TEMPLATE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_M) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_TYPENAME:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_Y) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_M) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_VIRTUAL:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_L));
    }
    break;
  case ST_MACRO_OVERRIDE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_STATIC:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_C));
    }
    break;
  // case ST_MACRO_ENUM:
  //   if (record->event.pressed)
  //   {
  //     SEND_STRING(SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_M));
  //   }
  //   break;
  case ST_MACRO_CLASS:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_S));
    }
    break;
  case ST_MACRO_STRUCT:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_T));
    }
    break;
  case ST_MACRO_NAMESPACE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_M) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_AUTO:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_O));
    }
    break;
  case ST_MACRO_WHILE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_W) PETKAU_DELAY SS_TAP(X_H) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_PRIVATE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_PUBLIC:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_C));
    }
    break;
  case ST_MACRO_REINTERPRET_CAST:
    if (record->event.pressed)
    {
      SEND_STRING(SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_P) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_LSFT(SS_TAP(X_MINUS)) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_T));
    }
    break;
  case ST_MACRO_INCLUDE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_C) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_DEFINE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_IFDEF:
    if (record->event.pressed)
    {
      SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_F));
    }
    break;
  case ST_MACRO_ELSE:
    if (record->event.pressed)
    {
      SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_E));
    }
    break;
  case ST_MACRO_ENDIF:
    if (record->event.pressed)
    {
      SEND_STRING(SS_LSFT(SS_TAP(X_3)) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_D) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_F));
    }
    break;
  case RGB_SLD:
    if (record->event.pressed)
    {
      rgblight_mode(1);
    }
    return false;
  }
  return true;
}

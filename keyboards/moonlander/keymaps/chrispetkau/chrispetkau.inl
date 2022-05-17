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
      return 0;
    default:
      return TAPPING_TERM;
  }
}

#define PETKAU_DELAY SS_DELAY(0)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_V) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_I) PETKAU_DELAY SS_TAP(X_D));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_K));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_1)) PETKAU_DELAY SS_TAP(X_EQUAL));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) PETKAU_DELAY SS_RSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) PETKAU_DELAY SS_RSFT(SS_TAP(X_DOT)));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_E) PETKAU_DELAY SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_N));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_L));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_E));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_E));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_L));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_O) PETKAU_DELAY SS_TAP(X_L));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) PETKAU_DELAY SS_TAP(X_A) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_S) PETKAU_DELAY SS_TAP(X_E));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) PETKAU_DELAY SS_TAP(X_R) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_E));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) PETKAU_DELAY SS_TAP(X_U) PETKAU_DELAY SS_TAP(X_L) PETKAU_DELAY SS_TAP(X_L));

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

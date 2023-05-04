enum custom_keycodes
{
    // mod-taps
    MT_LSFT = MT(MOD_LSFT, KC_T),
    MT_RSFT = MT(MOD_RSFT, KC_N),
    MT_LCTL = MT(MOD_LCTL, KC_S),
    MT_RCTL = MT(MOD_RCTL, KC_E),

    // layer-toggles
    LT_LNUM = LT(2, KC_D),
    LT_RNUM = LT(2, KC_H),
};

int16_t get_tapping_term_offset(uint16_t keycode)
{
    switch (keycode)
    {
    // Reduce the tapping term on the hold-for-Shift.
    case MT_RSFT:
    case MT_LSFT:
        return 0;
    // tap-dances
    case TD(0):
    case TD(1):
    case TD(2):
    case TD(3):
    case TD(4):
    case TD(5):
    case TD(6):
    case TD(7):
    case TD(8):
    case TD(9):
    case TD(10):
    case TD(11):
    // layer-toggles
    case LT_LNUM:
    case LT_RNUM:
        return 0;
    // mod-taps
    case MT_LCTL:
    case MT_RCTL:
        // return 850;
    default:
        return 0;
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record)
{
  return (uint16_t)((int16_t)TAPPING_TERM + get_tapping_term_offset(keycode));
}

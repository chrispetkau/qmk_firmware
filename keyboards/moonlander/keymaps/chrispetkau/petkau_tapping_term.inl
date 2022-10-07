uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
  // Reduce the tapping term on all "shift-inverted" keys. We don't actually
  // hold shift for these keys. The software does. Thus, the tapping term can
  // be non-existent. Furthermore, we *want* it to be non-existent so it
  // doesn't persist after tapping.
  // case SFT_T(KC_MINS):
  // case SFT_T(KC_QUOTE):
  //   return 0;
  // Reduce the tapping term on the hold-for-Shift-proxy-layers.
  case KC_T:
  case KC_N:
    return 150;
  // Increase the tapping term on the hold-for-Ctrl.
  case KC_S:
  case KC_E:
    return 250;
  // Really increase the tapping term on the hold-for-Select-All.
  case KC_A:
    return 350;
  // Even more for the Alts on Space and Enter.
  case KC_SPACE:
  case KC_ENTER:
    return 500;
  default:
    return TAPPING_TERM;
  }
}
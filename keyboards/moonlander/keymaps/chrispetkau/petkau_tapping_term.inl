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
int16_t get_tapping_term_offset(uint16_t keycode)
{
  switch (keycode)
  {
  // Reduce the tapping term on the hold-for-layers.
  case KC_T:
  case KC_N:
  case KC_R:
  case KC_F:
  case KC_U:
  case KC_D:
  case KC_H:
    return 0;
  // Increase the tapping term on the hold-for-Ctrl.
  case KC_S:
  case KC_E:
    // return 850;
  default:
    return 0;
  }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record)
{
  return (uint16_t)((int16_t)TAPPING_TERM + get_tapping_term_offset(keycode));
}

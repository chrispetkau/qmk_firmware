bool process_record_petkau(uint16_t keycode, keyrecord_t *record) {
    if(process_record_macros(keycode, record)) return true;
    switch (keycode) {
        case RGB_SLD:
            if (rawhid_state.rgb_control) {
                return false;
            }
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
    }
    return true;
}

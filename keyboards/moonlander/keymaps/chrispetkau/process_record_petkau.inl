bool cancel_rolled_modifier(uint16_t keycode, keyrecord_t *record, uint16_t mod, uint16_t rolled_1, uint16_t rolled_2) {
    /*
    This piece of code nullifies the effect of Right Shift when tapping
    the RCTL_T(KC_N) key.
    This helps rolling over RSFT_T(KC_E) and RCTL_T(KC_N)
    to obtain the intended "en" instead of "N".
    Consequently, capital N can only be obtained by tapping RCTL_T(KC_N)
    and holding LSFT_T(KC_S) (which is the left Shift mod tap).
    */

    /*
    Detect the tap.
    We're only interested in overriding the tap behaviour
    in a certain cicumstance. The hold behaviour can stay the same.
    */
    if (record->event.pressed && record->tap.count > 0) {
        // Detect right Shift
        if (get_mods() & MOD_BIT(mod)) {
            // temporarily disable right Shift
            // so that we can send KC_E and KC_N
            // without Shift on.
            unregister_mods(MOD_BIT(mod));
            tap_code(rolled_1);
            tap_code(rolled_2);
            // restore the mod state
            add_mods(MOD_BIT(mod));
            // to prevent QMK from processing RCTL_T(KC_N) as usual in our special case
            return true;
        }
    }
    /*else process RCTL_T(KC_N) as usual.*/
    return false;
}

bool process_record_petkau(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed && process_record_macros(keycode, record)) return true;

    switch (keycode) {
    case RCTL_T(KC_N): return cancel_rolled_modifier(keycode, record, KC_RCTL, KC_E, KC_N);
    case LCTL_T(KC_T): return cancel_rolled_modifier(keycode, record, KC_LCTL, KC_S, KC_T);

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

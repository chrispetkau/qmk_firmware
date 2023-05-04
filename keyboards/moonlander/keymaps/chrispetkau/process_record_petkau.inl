#define CONTINUE_KEYCODE_PROCESSING true
#define HALT_KEYCODE_PROCESSING false

bool cancel_rolled_modifier(uint16_t keycode, keyrecord_t *record, uint16_t mod, uint16_t mod_key, uint16_t key)
{
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
    if (record->tap.count <= 0)
        return CONTINUE_KEYCODE_PROCESSING;

    // Detect right Shift
    int cancel_mods = MOD_BIT(mod);
    if ((get_mods() & cancel_mods) == 0)
        return CONTINUE_KEYCODE_PROCESSING;

    // temporarily disable right Shift
    // so that we can send KC_E and KC_N
    // without Shift on.
    unregister_mods(cancel_mods);
    tap_code(mod_key);
    tap_code(key);
    // restore the mod state
    add_mods(cancel_mods);
    // to prevent QMK from processing RCTL_T(KC_N) as usual in our special case
    return HALT_KEYCODE_PROCESSING;
}

bool process_record_petkau(uint16_t keycode, keyrecord_t *record) {
    if(record->event.pressed && process_record_macros(keycode, record)) return true;

    switch (keycode) {
    case MT_RSFT:
        return cancel_rolled_modifier(keycode, record, KC_RCTL, KC_E, KC_N);
    case MT_LSFT:
        return cancel_rolled_modifier(keycode, record, KC_LCTL, KC_S, KC_T);
    case KC_W:
        return cancel_rolled_modifier(keycode, record, KC_RCTL, KC_E, KC_W);

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

// bool cancel_rolled_modifier(uint16_t keycode, uint16_t roll, uint16_t mod, uint16_t rolled_1, uint16_t rolled_2) {
//     /*
//     This piece of code nullifies the effect of Right Shift when tapping
//     the RCTL_T(KC_N) key.
//     This helps rolling over RSFT_T(KC_E) and RCTL_T(KC_N)
//     to obtain the intended "en" instead of "N".
//     Consequently, capital N can only be obtained by tapping RCTL_T(KC_N)
//     and holding LSFT_T(KC_S) (which is the left Shift mod tap).
//     */

//     /*
//     Detect the tap.
//     We're only interested in overriding the tap behaviour
//     in a certain cicumstance. The hold behaviour can stay the same.
//     */
//     if(keycode != roll) return false;
//     if (record->event.pressed && record->tap.count > 0) {
//         // Detect right Shift
//         if (get_mods() & MOD_BIT(mod)) {
//             // temporarily disable right Shift
//             // so that we can send KC_E and KC_N
//             // without Shift on.
//             unregister_mods(MOD_BIT(mod));
//             tap_code(rolled_1);
//             tap_code(rolled_2);
//             // restore the mod state
//             add_mods(MOD_BIT(mod));
//             // to prevent QMK from processing RCTL_T(KC_N) as usual in our special case
//             return true;
//         }
//     }
//     /*else process RCTL_T(KC_N) as usual.*/
//     return false;
// }

bool process_record_petkau(uint16_t keycode, keyrecord_t *record) {
    if(process_record_macros(keycode, record)) return true;

    switch (keycode) {
        // TODO
    // case RCTL_T(KC_N):
    //     /*
    //     This piece of code nullifies the effect of Right Shift when tapping
    //     the RCTL_T(KC_N) key.
    //     This helps rolling over RSFT_T(KC_E) and RCTL_T(KC_N)
    //     to obtain the intended "en" instead of "N".
    //     Consequently, capital N can only be obtained by tapping RCTL_T(KC_N)
    //     and holding LSFT_T(KC_S) (which is the left Shift mod tap).
    //     */

    //     /*
    //     Detect the tap.
    //     We're only interested in overriding the tap behaviour
    //     in a certain cicumstance. The hold behaviour can stay the same.
    //     */
    //     if (record->event.pressed && record->tap.count > 0) {
    //         // Detect right Shift
    //         if (get_mods() & MOD_BIT(KC_RSHIFT)) {
    //             // temporarily disable right Shift
    //             // so that we can send KC_E and KC_N
    //             // without Shift on.
    //             unregister_mods(MOD_BIT(KC_RSHIFT));
    //             tap_code(KC_E);
    //             tap_code(KC_N);
    //             // restore the mod state
    //             add_mods(MOD_BIT(KC_RSHIFT));
    //             // to prevent QMK from processing RCTL_T(KC_N) as usual in our special case
    //             return false;
    //         }
    //     }
    //      /*else process RCTL_T(KC_N) as usual.*/
    //     return true;

    // case LCTL_T(KC_T):
    //     /*
    //     This piece of code nullifies the effect of Left Shift when
    //     tapping the LCTL_T(KC_T) key.
    //     This helps rolling over LSFT_T(KC_S) and LCTL_T(KC_T)
    //     to obtain the intended "st" instead of "T".
    //     Consequently, capital T can only be obtained by tapping LCTL_T(KC_T)
    //     and holding RSFT_T(KC_E) (which is the right Shift mod tap).
    //     */

    //     if (record->event.pressed && record->tap.count > 0) {
    //         if (get_mods() & MOD_BIT(KC_LSHIFT)) {
    //             unregister_mods(MOD_BIT(KC_LSHIFT));
    //             tap_code(KC_S);
    //             tap_code(KC_T);
    //             add_mods(MOD_BIT(KC_LSHIFT));
    //             return false;
    //         }
    //     }
    //      /*else process LCTL_T(KC_T) as usual.*/
    //     return true;

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

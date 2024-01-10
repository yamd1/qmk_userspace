#include "yamd1.h"

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     return process_record_keymap(keycode, record);
// }

uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}

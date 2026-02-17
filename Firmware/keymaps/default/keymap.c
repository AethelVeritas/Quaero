// Copyright 2025 AethelVeritas
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐                 ┌───┬───┬───┬───┬───┬───┐
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │                 │ 5 │ 4 │ 3 │ 2 │ 1 │ 0 │  Row 0 / Row 5
     * ├───┼───┼───┼───┼───┼───┤                 ├───┼───┼───┼───┼───┼───┤
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │                 │ 5 │ 4 │ 3 │ 2 │ 1 │ 0 │  Row 1 / Row 6
     * ├───┼───┼───┼───┼───┼───┤                 ├───┼───┼───┼───┼───┼───┤
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │                 │ 5 │ 4 │ 3 │ 2 │ 1 │ 0 │  Row 2 / Row 7
     * ├───┼───┼───┼───┼───┼───┤                 ├───┼───┼───┼───┼───┼───┤
     * │ 0 │ 1 │ 2 │ 3 │ 4 │ 5 │                 │ 5 │ 4 │ 3 │ 2 │ 1 │ 0 │  Row 3 / Row 8
     * └───┴───┴───┴───┴───┴───┘                 └───┴───┴───┴───┴───┴───┘
     *             ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐
     *             │ 2 │ 3 │ 4 │ 5 │ │ 3 │ 2 │ 4 │ 5 │  Row 4 / Row 9
     *             └───┴───┴───┴───┘ └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_0,
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_0,
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_0,
        KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    KC_0,
                          KC_0,    KC_1,    KC_2,    KC_3,    KC_3,    KC_2,    KC_4,    KC_5
    )
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif 
  return true;
}

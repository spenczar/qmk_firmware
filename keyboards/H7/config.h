#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    TH7
#define PRODUCT         H7
#define DESCRIPTION     battlestation

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 28

/* key matrix pins */
#define MATRIX_ROW_PINS { F1, F0, E6, E5, D4, D5, D6, D7 }
#define MATRIX_COL_PINS { F2, F3, F4, F5, F6, F7, A0, A1, A2, A3, A4, A5, A6, A7, C7, C6, C5, C4, C3, C2, C1, C0, E1, E0, D3, D2, D1, D0 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN B6
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#define BACKLIGHT_BREATHING
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#endif

#pragma once

#undef MANUFACTURER
#undef PRODUCT
#define MANUFACTURER "Korne"
#define PRODUCT      "Corne v3 hotSwap"

// --- RGB Matrix ---
#define RGB_DI_PIN GP0                 // pin de la première LED (data in)
#define DRIVER_LED_TOTAL 54            // nombre total de LEDs
#define RGB_MATRIX_SPLIT { 27, 27 }    // gauche / droite
#define RGB_MATRIX_KEYPRESSES          // LED change on keypress
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

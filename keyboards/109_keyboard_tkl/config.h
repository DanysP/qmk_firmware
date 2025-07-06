#pragma once

#define MATRIX_ROWS 6 // Rows 0 to 5
#define MATRIX_COLS 18 // Columns 0 to 17
#define DIODE_DIRECTION COL2ROW

// Rotary Encoder configuration - based on PEC11R-4215K-S0024
#define NUM_ENCODERS 1 // Number of rotary encoders
#define ENCODER_BUTTON_PIN "PB14"
#define ENCODER_RESOLUTION 6 // The PPR (24) ÷ 4 (pulses per detent, 4 is typical for PEC11R

// OLED Display configuration
#define OLED_TIMEOUT 30000 // OLED timeout in milliseconds, after which the display will turn off to save power
#define OLED_UPDATE_INTERVAL 100 // OLED update interval in milliseconds, how often the display will refresh
#define OLED_DISPLAY_128X32 // Display resolution

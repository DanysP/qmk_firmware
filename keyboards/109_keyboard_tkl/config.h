#pragma once

#define MATRIX_ROWS 6 // Rows 0 to 5
#define MATRIX_COLS 18 // Columns 0 to 17
#define DEBOUNCE 5 // Debounce time in milliseconds, how long the firmware will wait before registering a key press to avoid false triggers

// Rotary Encoder configuration - based on PEC11R-4215K-S0024
#define ENCODER_RESOLUTION 6 // The PPR (24) ÷ 4 (pulses per detent, 4 is typical for PEC11R

// OLED Display configuration
#define OLED_TIMEOUT 30000 // OLED timeout in milliseconds, after which the display will turn off to save power
#define OLED_UPDATE_INTERVAL 100 // OLED update interval in milliseconds, how often the display will refresh
#define OLED_DISPLAY_128X32 // Display resolution

// USART configuration
#define SERIAL_USART_FULL_DUPLEX // Full duplex mode for USART communication, only if the hardware supports it

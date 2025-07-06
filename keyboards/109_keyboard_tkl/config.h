#pragma once

#define MATRIX_ROWS 6 // Rows 0 to 5
#define MATRIX_COLS 18 // Columns 0 to 17
#define DIODE_DIRECTION COL2ROW // Diode direction is from column to row, as per the schematic design
#define DEBOUNCE 5 // Debounce time in milliseconds, how long the firmware will wait before registering a key press to avoid false triggers

// All pin assignments are based on the KiCad schematic file for the 109 Keyboard TKL v2.1, using the STM32G474 microcontroller
#define MATRIX_ROW_PINS { PC3, PC2, PC1, PA10, PA0, PA1 }
#define MATRIX_COL_PINS { PA7, PC4, PC5, PB0, PB1, PB2, PB10, PB11, PB15, PC6, PC7, PC8, PC9, PA8, PA9, PA6, PA4, PA5 }

// Rotary Encoder configuration - based on PEC11R-4215K-S0024
#define ENCODERS_PAD_A PB13
#define ENCODERS_PAD_B PB12
#define ENCODER_RESOLUTION 6 // The PPR (24) ÷ 4 (pulses per detent, 4 is typical for PEC11R
#define ENCODER_BUTTON_PIN PB14 // Pin assigned to the rotary encoder button

// OLED Display configuration
#define OLED_TIMEOUT 30000 // OLED timeout in milliseconds, after which the display will turn off to save power
#define OLED_UPDATE_INTERVAL 100 // OLED update interval in milliseconds, how often the display will refresh
#define OLED_DISPLAY_128X32 // Display resolution
#define I2C_SCL_PIN PB6
#define I2C_SDA_PIN PB7

// USART configuration
#define SERIAL_USART_FULL_DUPLEX // Full duplex mode for USART communication, only if the hardware supports it
#define SERIAL_USART_TX_PIN { PA2 } 
#define SERIAL_USART_RX_PIN { PA3 }
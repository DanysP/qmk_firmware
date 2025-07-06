// For adding or overriding other ChibiOS HAL settings if needed
#pragma once

#define STM32G4xx_MCUCONF // Defines the MCU configuration for STM32G4 series
#define STM32G474_MCUCONF // Defines the MCU configuration for STM32G4 series

#define PAL_USE_PORTA TRUE // Enables Ports A for GPIO operations
#define PAL_USE_PORTB TRUE // Enables Ports B for GPIO operations
#define PAL_USE_PORTC TRUE // Enables Ports C for GPIO operations
#define PAL_USE_PORTG TRUE // Enables Ports G for GPIO operations

#define STM32_HSI16_ENABLED TRUE // Enables the High-Speed Internal (HSI) clock at 16 MHz
#define STM32_HSI48_ENABLED TRUE // Enables the High-Speed Internal (HSI) clock at 48 MHz

#define STM32_USB_USE_USB1 TRUE // Enables USB1 peripheral
#define STM32_USB_USE_USB2 FALSE // Disables USB2 peripheral
#define STM32_USB_USB1_HP_INTERRUPT_PRIORITY 13 // Sets the high priority for USB1 high-priority interrupt
#define STM32_USB_USB1_LP_INTERRUPT_PRIORITY 14 // Sets the low priority for USB1 low-priority interrupt

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

#define STM32_I2C_USE_I2C1 TRUE // Enables I2C1 peripheral
#define STM32_I2C_USE_I2C2 FALSE // Disables I2C2 peripheral
#define STM32_I2C_USE_I2C3 FALSE // Disables I2C3 peripheral
#define STM32_I2C_USE_I2C4 FALSE // Disables I2C4 peripheral

#define STM32_USB_USE_USB1 TRUE // Enables USB1 peripheral
#define STM32_USB_USE_USB2 FALSE // Disables USB2 peripheral
#define STM32_USB_USB1_HP_INTERRUPT_PRIORITY 13 // Sets the high priority for USB1 high-priority interrupt
#define STM32_USB_USB1_LP_INTERRUPT_PRIORITY 14 // Sets the low priority for USB1 low-priority interrupt

#define STM32_I2C_I2C1_RX_DMA_STREAM        STM32_DMA_STREAM_ID(1, 7) // Defines the DMA stream for I2C1 receive operations
#define STM32_I2C_I2C1_TX_DMA_STREAM        STM32_DMA_STREAM_ID(1, 6) // Defines the DMA stream for I2C1 transmit operations

// EXTI priorities
#define STM32_IRQ_EXTI0_PRIORITY       13
#define STM32_IRQ_EXTI1_PRIORITY       13
#define STM32_IRQ_EXTI2_PRIORITY       13
#define STM32_IRQ_EXTI3_PRIORITY       13
#define STM32_IRQ_EXTI4_PRIORITY       13
#define STM32_IRQ_EXTI5_9_PRIORITY     13
#define STM32_IRQ_EXTI10_15_PRIORITY   13
#define STM32_IRQ_EXTI16_40_41_PRIORITY 13
#define STM32_IRQ_EXTI17_PRIORITY      13
#define STM32_IRQ_EXTI18_PRIORITY      13
#define STM32_IRQ_EXTI19_PRIORITY      13
#define STM32_IRQ_EXTI20_PRIORITY      13
#define STM32_IRQ_EXTI21_22_29_PRIORITY 13
#define STM32_IRQ_EXTI30_32_PRIORITY   13
#define STM32_IRQ_EXTI33_PRIORITY      13

// FDCAN priorities
#define STM32_IRQ_FDCAN1_PRIORITY      13
#define STM32_IRQ_FDCAN2_PRIORITY      13
#define STM32_IRQ_FDCAN3_PRIORITY      13

// USART/UART priorities
#define STM32_IRQ_USART1_PRIORITY      13
#define STM32_IRQ_USART2_PRIORITY      13
#define STM32_IRQ_USART3_PRIORITY      13
#define STM32_IRQ_UART4_PRIORITY       13
#define STM32_IRQ_UART5_PRIORITY       13
#define STM32_IRQ_LPUART1_PRIORITY     13

// TIM priorities
#define STM32_IRQ_TIM1_BRK_TIM15_PRIORITY    13
#define STM32_IRQ_TIM1_UP_TIM16_PRIORITY     13
#define STM32_IRQ_TIM1_TRGCO_TIM17_PRIORITY  13
#define STM32_IRQ_TIM1_CC_PRIORITY           13
#define STM32_IRQ_TIM2_PRIORITY              13
#define STM32_IRQ_TIM3_PRIORITY              13
#define STM32_IRQ_TIM4_PRIORITY              13
#define STM32_IRQ_TIM5_PRIORITY              13
#define STM32_IRQ_TIM6_PRIORITY              13
#define STM32_IRQ_TIM7_PRIORITY              13
#define STM32_IRQ_TIM8_UP_PRIORITY           13
#define STM32_IRQ_TIM8_CC_PRIORITY           13
#define STM32_IRQ_TIM18_DAC3_PRIORITY        13
#define STM32_IRQ_TIM20_CC_PRIORITY          13
#define STM32_IRQ_TIM20_UP_PRIORITY          13
#define STM32_IRQ_TIM6_DACUNDER_PRIORITY    13
#define STM32_IRQ_TIM7_PRIORITY             13
#define STM32_IRQ_TIM8_UP_PRIORITY          13
#define STM32_IRQ_TIM15_PRIORITY            13
#define STM32_IRQ_TIM16_PRIORITY            13
#define STM32_IRQ_TIM17_PRIORITY            13
#define STM32_IRQ_TIM18_DAC3_PRIORITY       13
#define STM32_IRQ_TIM20_CC_PRIORITY         13

// Missing EXTI group interrupt priorities
#define STM32_IRQ_EXTI164041_PRIORITY    13
#define STM32_IRQ_EXTI212229_PRIORITY    13

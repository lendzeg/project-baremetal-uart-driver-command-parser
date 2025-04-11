// ============================
// Description:
//   This file implements low-level UART communication functions for the
//   STM32F103C8T6 microcontroller, using direct register access (bare-metal C).
//
//   Responsibilities:
//   - Initialize GPIOA pins (PA9, PA10) for USART1
//   - Configure USART1 peripheral for 9600 baud communication
//   - Send and receive characters over UART
//   - Provide helper functions for string transmission
//
//   Key Registers Used:
//   - RCC_APB2ENR, GPIOA_CRL
//   - USART1_BRR, USART1_CR1, USART1_SR, USART1_DR
// ============================

#include "uart.h"

#define RCC_APB2ENR 
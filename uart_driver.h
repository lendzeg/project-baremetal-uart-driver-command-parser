/*
HEADER FOR UART FUNCTIONS

Description:
Declares UART functions and register macros.
*/

#ifndef UART_DRIVER_H

#define UART_DRIVER_H

#include <stdint.h>

// Register definitions (STM32F103 Blue Pill) - Check Reference Manual RM0008
#define RCC_BASE        0x40021000 // Section 3.3 Memory map (Page 50)
#define USART2_BASE     0x40004400 // Section 3.3 Memory map (Page 52)
#define RCC_APB1ENR     (*((volatile uint32_t *)(RCC_BASE + 0x1C))) // Section 7.3.8 APB1 peripheral clock enable register (RCC_APB1ENR) (Page 115)
#define USART2_DR       (*((volatile uint32_t *)(USART2_BASE + 0x04))) // Section 27.6.2 Data Register (USART_DR) (Page 820)

// Function prototypes
void UART_Init(void);
void UART_Write(char c);
char UART_Read(void);
void UART_Print(const char *str);

#endif
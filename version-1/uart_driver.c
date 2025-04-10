#include "uart_driver.h"

void UART_Init(void){
    RCC_APB1ENR |= (1 << 17); // Enable USART2 clock
}

void UART_Write(char c){
    while USART2_SR & (1 << 7)
}
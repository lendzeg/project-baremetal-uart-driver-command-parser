// Description:
//      This is the entry point of the entry point of the bare-metal UART
//      Command Parser project for the STM32F103C8T6 microcontroller. It 
//      initializes the UART hardware, displays a startup message over serial
//      and enters an infinite loop to read characters from the UART,
//      echo them back to the terminal, and feed them into a simple command parser.
//
//      Functional flow:
//      - uart_init(): Configure GPIO and UART2
//      - uart_send_string(): Notify PC user via UART
//      - while(1): Continuously receive characters, echo, and parse
//
//      Commands handled (via cmd_parser.c):
//      - "led on"      -> Respond with "LED turned ON"
//      - "led off"     -> Respond with "LED turned OFF"
//      - "status"      -> Respond with "Status: OK"

#include "uart.h"
#include "cmd_parser.h"

int main(void){
    uart_init();
    uart_send_string("UART Command Parser Ready\r\n");

    while(1){
        char c = uart_read_char();
        uart_send_char(c); // echo
        cmd_parser_process_char(c);
    }

    return 0;
}
/*
CORE APPLICATION LOGIC + MAIN LOOP

Description:
This file contains the main() function, initializes the hardware, and runs the main loop
*/

#include "uart_driver.h" 
#include "command_parser.h" 

int main(void){
    // Initialize hardware
    UART_Init();
    LED_Init(); // Assuming you define this for PC13

    UART_Print("UART Command Parser Ready!\r\n");

    while(1){
        UART_ReadLine(); // Wait for commands  Why is not highlighting an error
    }
}


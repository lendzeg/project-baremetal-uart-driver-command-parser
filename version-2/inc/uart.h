/*  ====================
    Here are the prototypes of the functions that interface the UART
    ====================
*/
#ifndef UART_H
#define UART_H

#include <stdio.h>

void uart_init(void);
void uart_send_char(char c);
void uart_send_string(const char *str);
char uart_read_char(void);

#endif // UART_H
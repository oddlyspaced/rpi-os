#pragma once

void uart_init();
char uart_rec();
void uart_send(char c);
void uart_send_string(char *str);

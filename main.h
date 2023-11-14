#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list val);
int print_str(va_list val);
int _strlen(char *str);
int strlen(const char *str);
int print_percent(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);

#endif /* _MAIN_H */

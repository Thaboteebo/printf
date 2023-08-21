#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);

/****Task 0 FUNCTION****/
int _printf(const char *format, ...);
void my_str(char *str);
int my_putchar(int ch);
int f_spec(va_list args_p, char specifier);
void isvalue(long n, int base);

#endif

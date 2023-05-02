#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_argument(char specifier, va_list args, int count);
int print_char(char c);
int print_string(char* str);
int print_integer(int params);
#endif
#include"main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count = print_argument(*(++format), args, count);
		else
			count += putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

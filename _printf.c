#include<stdio.h>
#include<stdarg.h>
#include"main.h"
/**
 * _printf - check the code
 * @format : format of the function
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int c, i = 0;
	char *s;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				c = va_arg(args, int);
				{
					putchar(c);
					i++;
				}
				case 's':
				s = va_arg(args, char *);
				{
					while (*s != '\0')
					{
						putchar(*s);
						s++;
						i++;
					}
				}
				case '%':
				{
					putchar('%');
					i++;
				}
				{
					putchar('%');
					putchar(*format);
					i += 2;
				}
			}
		}
		else
		{
		putchar(*format);
		i++;
		}
		format++;
		}
	va_end(args);
	return (i);
}

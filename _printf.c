#include <stdio.h>
#include <stdarg.h>
#include"main.h"
/**
 * _printf - check the code
 * @format : format of the function
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c': {
					char c = va_arg(args, int);

					putchar(c);
					i++;
					break;
				}
				case 's':
				{
					char *s = va_arg(args, char*);

					while (*s != '\0')
					{
						putchar(*s);
						i++;
						s++;
					}
					break;
				}
				case '%':
				{
					putchar('%');
					i++;
					break;
				}
				default:
				break;
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

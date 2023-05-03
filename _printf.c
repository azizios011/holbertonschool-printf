#include"main.h"
/**
 * _printf - check the code
 * @format: fromat of the function.
 * Return: EXIT_SUCCESS.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int num_chars_printed = 0;
	int i = 0;
	int j;

	print_fn_t print_fn[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{0, NULL},
	};

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; print_fn[j].fn; j++)
			{
				if (format[i] == print_fn[j].c)
				{
					num_chars_printed += print_fn[j].fn(args);
					break;
				}
			}
		}
		else
		{
			num_chars_printed += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (num_chars_printed);
}

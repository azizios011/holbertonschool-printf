#include"main.h"
/**
 * print_argument - prints the argument based on the format specifier
 * @specifier: the format specifier character
 * @args: the va_list of arguments
 * @count: the current count of printed characters
 *
 * Return: the updated count of printed characters
 */
int print_argument(char specifier, va_list args, int count)
{
	switch (specifier)
	{
	case 'c':
		count += print_char(va_arg(args, int));
		break;
	case 's':
		count += print_string(va_arg(args, char *));
		break;
	case 'd':
	case 'i':
		count += print_integer(va_arg(args, int));
		break;
	case '%':
		count += putchar('%');
		break;
	default:
		count += putchar('%');
		count += putchar(specifier);
		break;
	}
	return (count);
}

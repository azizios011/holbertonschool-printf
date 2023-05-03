#include"main.h"
/**
 * print_string - check the code
 * @args: argumment string
 * Return: Always 0.
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int num_chars_printed = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		num_chars_printed++;
	}
	return (num_chars_printed);
}

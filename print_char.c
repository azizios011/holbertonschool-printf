#include"main.h"
/**
 * print_char - check the code
 * @args: argumment string
 * Return: Always 0.
*/
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}

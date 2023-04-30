#include"main.h"
/**
 * print_integer - print an integer
 * @num: the integer
 * Return: an integer.
*/
int print_integer(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		count += print_integer(num / 10);
	}
	count += putchar(num % 10 + '0');
	return (count);
}

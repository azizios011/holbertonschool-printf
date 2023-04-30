#include"main.h"
/**
 * print_string -print a string
 * @str: pointer to string
 * Return: a string.
*/
int print_string(char *str)
{
	int count = 0;

	while (*str)
	{
		count += putchar(*str++);
	}
	return (count);
}

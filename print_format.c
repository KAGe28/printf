#include "main.h"

/**
  * print_char- print char
  * @args: list
  * Return: count
  */

int print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
  * print_string- prints a string
  * @args: list
  * Return: count
  */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

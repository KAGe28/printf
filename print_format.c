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

	if ( str != NULL)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			count++;
		}
	}
	return (count);
}

/**
  * print_int- prints an integer
  * @args: list
  * Return: count
  */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n -= n;
		count++;
	}
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		int d[10];
		int i = 0;
		int j = 0;

		while (n > 0)
		{
			d[i] = n % 10;
			n /= 10;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar('0' + d[j]);
			count++;
		}
	}
	return (count);
}

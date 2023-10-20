#include "main.h"

/**
  * print_unsigned- prints unsigned int
  * @args: list
  * Return: count
  */

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		unsigned int ud[10];
		int i = 0;
		int j = 0;

		while (n > 0)
		{
			ud[i] = n % 10;
			n /= 10;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar('0' + ud[j]);
			count++;
		}
	}
	return (count);
}

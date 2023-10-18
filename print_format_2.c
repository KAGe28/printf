#include "main.h"

/**
  * print_binary- prints binary number
  * @args: list
  * Return: count
  */

int print_binary(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		int bits[32];
		int i = 0;
		int j = 0;

		while (n > 0)
		{
			bits[i] = n % 2;
			n /= 2;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar('0' + bits[j]);
			count++;
		}
	}
	return (count);
}

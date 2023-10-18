#include "main.h"

/**
  * print_octal- prints octal value
  * @args: list
  * Return: count
  */

int print_octal(va_list args)
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
		unsigned int od[12];
		int i = 0;
		int j = 0;

		while (n > 0)
		{
			od[i] = n % 8;
			n /= 8;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar('0' + od[j]);
			count++;
		}
	}
	return (count);
}

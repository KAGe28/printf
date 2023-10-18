#include "main.h"

/**
  * print_hex_l- prints hex lower value
  * @args: list
  * Return: count
  */

int print_hex_l(va_list args)
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
		char hd[16] = "0123456789abcdef;

		char hc[12];

		int i = 0;
		int j = 0;

		while (n > 0)
		{
			hc[i] = hd[n % 16];
			n /= 16;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hc[j]);
			count++;
		}
	}
	return (count);
}

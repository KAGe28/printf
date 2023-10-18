#include "main.h"

/**
  * _printf- print to stdout
  * @format: format
  * Return: int
  */

int _printf(const char  *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				int res = validate_format(*format, args);

				if (res == 0)
				{
					putchar('%');
					count += 2;
				}
				else
				{
					count += res;
				}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

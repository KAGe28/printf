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

	while (*format && *format != NULL)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				int res = validate_format(*format, args);

				if (res == 0)
				{
					_putchar('%');
					_putchar(*format);
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
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

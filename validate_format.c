#include "main.h"

/**
  * validate_format- check correct function
  * @format: The format character
  * @args: list of args
  * Return: an integer
  */

int validate_format(char format, va_list args)
{
	my_fs valid_format[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
	};
	int size = sizeof(valid_format) / sizeof(valid_format[0]);
	int i;

	for (i = 0; i < size; i++)
	{
		if (valid_format[i].format_char == format)
		{
			int res = valid_format[i].f(args);

			return (res);
		}
	}
	return (0);
}

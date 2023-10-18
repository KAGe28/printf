#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#ifndef NULL
#define NULL ((void *)0)
#endif

/**
  * struct f_struct- structure
  * @format_char: the format character
  * @f: the function associated
  */

typedef struct f_struct
{
	char format_char;
	int (*f)(va_list);
} my_fs;

int _putchar(char c);
int _strlen(char *s);
int print_char(va_list args);
int print_string(va_list args);
int validate_format(char format, va_list args);
int _printf(const char *format, ...);
#endif /* MAIN_H */

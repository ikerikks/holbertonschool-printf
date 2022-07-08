#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* print_format - Print all format
* @format: Format to print
* Return: Pointer to valid function or NULL
*/
static int (*print_format(const char *format))(va_list)
{
	int j = 0;
	print_t type[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{NULL, NULL}
	};
	for (; type[j].s != NULL; j++)
	{
		if (*(type[j].s) == *format)
			break;
	}
	return (type[j].i);
}

/**
 * print_nan - writes chars after a % if they
 * don't match anything in the struct
 * @ch1: the first char passed (always %)
 * @ch2: the char after the %
 * Return: 1 if ch2 is a % and 2 is ch2 is anything else
 */

int print_nan(char ch1, char ch2)
{
	if (ch2 == '%')
	{
		write(1, &ch2, 1);
		return (1);
	}
	else
	{
		write(1, &ch1, 1);
		write(1, &ch2, 1);
		return (2);
	}
}

/**
* _printf - function that produces output of format
* @format: a pointer to produce
* @...: others
* Return: the number of characters print
*/
int _printf(const char *format, ...)
{
	va_list list;
	int (*f)(va_list);
	unsigned int y = 0, x = 0;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[y] != '\0')
	{
		if (format[y] == '%')
		{
			if (format[y + 1] == '\0')
				return (-1);
			f = print_format(&format[y + 1]);
			if (f == NULL)
				x += print_nan(format[y], format[y + 1]);
			else
				x += f(list);
			y++;
		}

		else
		{
			_putchar(format[y]);
			x++;
		}
		y++;
	}
	va_end(list);
	return (x);
}

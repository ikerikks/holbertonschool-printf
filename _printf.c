#include "main.h"

/**
* print_format - Print all format
* @format: Format to print
* return: If success.
*/
int _printf(const char *format, ...)
{
	print_t type[] = {
			{"c", print_c},
			{"s", print_s},
			{NULL, NULL}
	};

	int j = 0;

	while (j < 10)
	{
		if (format[0] == type->s[j])
			break;
		j++;
	}
	return (j);
}

#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_o - Print output octal
* @d: Octal to print
* Return: Success.
*/

int print_o(va_list o)
{
	unsigned int base[11];
	unsigned int a, max = 1073741824, n, sum, 
	int count;

	n = va_arg(o, unsigned int);
	base[0] = n / max;

	for (a = 1; a < 11; a++)
	{
		max /= 8;
		base[a] = (n / max) % 8;
	}

	for (a = 0, sum = 0, count = 0; a < 11; a++)
	{
		sum += base[a];
		if (sum || a == 10)
		{
			_putchar('0' + base[a]);
			count++;
		}
	}
	return (count);
}

#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* print_u - Print output decimal unsigned int
* @u: Decimal to print
* Return: Success.
*/

int print_u(va_list u)
{
	int base[10];
	unsigned int n;
	unsigned int a, max = 1000000000, sum = 0;
	int count = 0;

	n = va_arg(u, unsigned int);

	base[0] = n / max;
	for (a = 1; a < 10; a++)
	{
		max /= 10;
		base[a] = (n / max) % 10;
	}

	for (a = 0; a < 10; a++)
	{
		sum += base[a];
		if (sum != 0 || a == 9)
		{
			_putchar('0' + base[a]);
			count++;
		}
	}
	return (count);
}

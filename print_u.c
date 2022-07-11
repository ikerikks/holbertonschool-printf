#include "main.h"
#include <stdlib.h>

/**
* print_u - Print output decimal unsigned int
* @u: Decimal to print
* Return: Success.
*/

int print_u(va_list u)
{
	int base[10];
	int a, n;
	unsigned int max = 1000000000, sum = 0, count = 0;

	n = va_arg(u, unsigned int);

	base[0] = n / max;
	for (a = 1; a < 10; a++)
	{
		max /= 10;
		base[a] = (n / max) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (a = 0; a < 10; a++)
			base[a] *= -1;
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

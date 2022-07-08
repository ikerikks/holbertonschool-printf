#include "main.h"
#include <stdlib.h>

/**
* print_d - Print output decimal
* @d: Decimal to print
* Return: Success.
*/

int print_d(va_list d)
{
	int base[10];
	int a = 1, max = 1000000000, n, sum = 0, count = 0; 
	
	n = va_arg(d, int);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		count++;
	}

	base[0] = n / max;
	
	for (; a < 10; a++)
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

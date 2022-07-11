#include "main.h"
#include <stdlib.h>

/**
 * print_X - A function that conversion unsigned hexadecimal
 * @X: format to print
 * Return: Number of printed char
 */
int print_X(va_list X)
{
	unsigned int bash[8];
	unsigned int n, m = 268435456, o = 1, sum = 0;
	char diff;
	int count;

	n = va_arg(X, unsigned int);
	diff = 'a' - ':';
	bash[0] = n / m;
	for (; o < 8; o++)
	{
		m /= 16;
		bash[o] = (n / m) % 16;
	}
	for (o = 0, count = 0; o < 8; o++)
	{
		sum += bash[o];
		if (sum || o == 7)
		{
			if (bash[o] < 10)
				_putchar('0' + bash[o]);
			else
				_putchar('0' + diff + bash[o]);
			count++;
		}
	}
	return (count);
}

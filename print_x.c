#include "main.h"
#include <stdlib.h>

/**
 * print_x - A function that conversion unsigned hexadecimal
 * @x: format to print
 * Return: Number of printed char
 */
int print_x(va_list x)
{
	unsigned int bash[8];
	unsigned int n, m, o, sum;
	char diff;
	int count;

	n = va_arg(x, unsigned int);
	m = 268435456;
	diff = 'a' - ':';
	bash[0] = n / m;
	for (o = 1; o < 8; o++)
	{
		m /= 16;
		bash[o] = (n / m) % 16;
	}
	for (o = 0; 0 < 8; o++)
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

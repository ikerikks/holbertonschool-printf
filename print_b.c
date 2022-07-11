#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_b - A function that print unsigned int argument is converted to binary
 * @b: Unsigned int to print
 * Return: number of print digit
 */
int print_b(va_list b)
{
	unsigned int n, m, o, p;
	unsigned int a[32];
	int count;

	n = va_arg(b, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	for (o = 1; o < 32; o++)
	{
		m /= 2;
		a[o] = (n / m) % 2;
	}
	for (o = 0, p = 0, count = 0; o < 32; o++)
	{
		p += a[o];
		if (p || o == 31)
		{
			_putchar('0' + a[o]);
			count++;
		}
	}
	return (count);
}

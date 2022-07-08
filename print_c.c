#include "main.h"
#include <stdlib.h>

/**
* print_c - Print output character
* @c: Character to print
* Return: Success.
*/

int print_c(va_list c)
{
	char charact = (char)va_arg(c, int);

	_putchar(charact);
	return (1);
}

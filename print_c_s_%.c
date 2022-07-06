#include "main.h"

/**
* print_c - Print output character
* @c: Character to print
* Return: Success.
*/
int print_c(va_list c)
{
	char charact = (char)va_arg(c, int);
	
	_putchar (charact);
	return (1);
}

/**
* print_s - Print output string
* @s: String to print
* Return: Success.
*/
int print_s(va_list s)

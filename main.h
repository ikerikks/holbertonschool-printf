#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdarg.h>

typedef struct print
{
	char *s;
	int (*i)(va_list);

} print_t;

/* Prototypes */

int _putchar(char c);
int print_nan(char ch1, char ch2);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
#endif

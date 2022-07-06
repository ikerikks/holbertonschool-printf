#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdarg.h>

typedef struct print
{
	char *s;
	int (*i)(va_list);

} print_f;

/* Prototypes */

int _putchar(char c);
int _printf(const char *format, ...);

#endif

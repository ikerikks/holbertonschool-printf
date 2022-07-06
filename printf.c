#include "main.h"

/**
* print_format - Print all format
* @format: Format to print
* return: If success.
*/
int (*print_format(const char *format))(va_list)
{
	
	print_f type[] = {
			{"c", print_c},
			{"s", print_s},
			{"%", print_percent},
			{NULL, NULL}
	};
	

}

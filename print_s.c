#include "main.h"

/**
* print_s - Print output string
* @s: String to print
* Return: Success.
*/

int print_s(va_list s)
{
        char *string = va_arg(s, char*);

        int i = 0;

        if (string == NULL)
                string = "";

        while (string[i])
                _putchar(string[i++]);

        return (i);
}

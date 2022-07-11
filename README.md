# C function - printf()
**`printf`** in C, sends formatted output to standard output. 
The string is written in a simple [template language](https://en.wikipedia.org/wiki/Template_language "Template language"): characters are usually copied literally into the function's output, but **format specifiers**, which start with a [`%`](https://en.wikipedia.org/wiki/Percent_sign "Percent sign") character, indicate the location and method to translate a piece of data (such as a number) to characters.
If there are  format specifiers, those are replaced with their respective arguments that follow the  _string_  to the  `printf`  call. These format specifiers may also contain its length, precision, and other flags.
An example of **printf** function:
![enter image description here](https://upload.wikimedia.org/wikipedia/commons/2/2c/Printf.svg)
### **In this project we create our own *"printf"* function called : *"_printf"*.**

## Declaration
The declaration of _printf() function:

    int _printf(const  char  *format,  ...);
- **Return Value**
If the function successfully executes, it returns the total number of characters written to the standard output. If an error occurs, a negative number is returned.
- **Parameters/ Arguments** 
This is the format that contains the text to be written to standard output. It can optionally contain embedded format tags that are replaced by the values specified in subsequent additional arguments and formatted as requested.

## Syntax
The syntax for a format placeholder is:

	%[_flags_][_width_][._precision_][_length_]_specifier_
    
 **  
		  
	_printf("Text to be displayed : %format_specifier", variable);

## Required header
**``` main.h ```**
	
## How to use it ?
Example of **_printf** function in main.c file:
```
#include "main.h"
/**
 * main - prints an output
 * Return: 0
 */
int main(void)
{
	_printf("Hello, World!");
    return (0);
}
```
To use **_printf** function you have to:
* compile all ".c" files present in the repository, including the header file "main.h":	``` $ gcc *.c -o ```

Output:

``` $ Hello, World! ```


##
### Flags field (optional)
| Character |Description  |
|--|--|
|- (minus)  | Left-align the output of this placeholder. (The default is to right-align the output.)|
|+ (plus)|Prepends a plus for positive signed-numeric types. positive = +, negative = -. (The default doesn't prepend anything in front of positive numbers.)|
|␣ (space)|Prepends a space for positive signed-numeric types. positive = ␣ , negative = - . This flag is ignored if the + flag exists. (The default doesn't prepend anything in front of positive numbers.)|
|0 (zero)|When the 'width' option is specified, prepends zeros for numeric types. (The default prepends spaces.) For example, `printf("%4X",3)` produces `3`, while `_printf("%04X",3)` produces `0003`.|
|' (apostrophe)|The integer or exponent of a decimal has the thousands grouping separator applied. |
|# (hash)|Alternate form: For g and G types, trailing zeros are not removed. For f, F, e, E, g, G types, the output always contains a decimal point. For o, x, X types, the text 0, 0x, 0X, respectively, is prepended to non-zero numbers. |

### Width field (optional)
The Width field specifies a  _minimum_  number of characters to output, and is typically used to pad fixed-width fields in tabulated output, where the fields would otherwise be smaller, although it does not cause truncation of oversized fields.

The width field may be omitted, or a numeric integer value, or a dynamic value when passed as another argument when indicated by an asterisk  *.[[3]](https://en.wikipedia.org/wiki/Printf_format_string#cite_note-3)  For example,  `printf("%*d", 5, 10)`  will result in  `10`  being printed, with a total width of 5 characters.

Though not part of the width field, a leading zero is interpreted as the zero-padding flag mentioned above, and a negative value is treated as the positive value in conjunction with the left-alignment  -  flag also mentioned above.

### .Precision field (optional)
The Precision field usually specifies a  _maximum_  limit on the output, depending on the particular formatting type. For floating point numeric types, it specifies the number of digits to the right of the decimal point that the output should be rounded. For the string type, it limits the number of characters that should be output, after which the string is truncated.

The precision field may be omitted, or a numeric integer value, or a dynamic value when passed as another argument when indicated by an asterisk  *. For example,  `printf("%.*s", 3, "abcdef")`  will result in  `abc`  being printed.

### Length field (optional)
The Length field can be omitted or be any of:
|Character|Description  |
|--|--|
|hh  |For integer types, causes printf to expect an int-sized integer argument which was promoted from a char.  |
|h |For integer types, causes printf to expect an int-sized integer argument which was promoted from a short. |
|l |or integer types, causes printf to expect a long-sized integer argument. For floating point types, this is ignored.  float  arguments are always promoted to  double  when used in a varargs call.[[4]](https://en.wikipedia.org/wiki/Printf_format_string#cite_note-c99io-4) |
|ll |For integer types, causes printf to expect a long long-sized integer argument. |
|L |For floating point types, causes printf to expect a long double argument. |
|z |For integer types, causes printf to expect a size_t-sized integer argument. |
|j |For integer types, causes printf to expect a intmax_t-sized integer argument. |
|t |For integer types, causes printf to expect a ptrdiff_t-sized integer argument. |

### Specifier field (required)
The Type field can be any of:
|Character  |Description  |
|--|--|
|%  |Prints a literal % character (this type doesn't accept any flags, width, precision, length fields).  |
|%% |Prints a % character. (No argument expected) |
|d or i |int as a signed [integer](https://en.wikipedia.org/wiki/Integer "Integer"). %d and %i are synonymous for output, but are different when used with [scanf](https://en.wikipedia.org/wiki/Scanf "Scanf") for input (where using %i will interpret a number as hexadecimal if it's preceded by 0x, and octal if it's preceded by 0.) |
|u | decimal unsigned int. |
|b | Prints binary. |
|f, F |double in normal ([fixed-point](https://en.wikipedia.org/wiki/Fixed-point_arithmetic "Fixed-point arithmetic")) notation. f and F only differs in how the strings for an infinite number or NaN are printed (inf, infinity and nan for f; INF, INFINITY and NAN for F). |
|e, E |double value in standard form (_d_._ddd_e±_dd_). An E conversion uses the letter E (rather than e) to introduce the exponent. The exponent always contains at least two digits; if the value is zero, the exponent is 00. In Windows, the exponent contains three digits by default, e.g. 1.5e002, but this can be altered by Microsoft-specific `_set_output_format` function. |
|g, G |double in either normal or exponential notation, whichever is more appropriate for its magnitude. g uses lower-case letters, G uses upper-case letters. This type differs slightly from fixed-point notation in that insignificant zeroes to the right of the decimal point are not included. Also, the decimal point is not included on whole numbers. |
|x, X |unsigned int as a [hexadecimal](https://en.wikipedia.org/wiki/Hexadecimal "Hexadecimal") number. x uses lower-case letters and X uses upper-case. |
|o |unsigned int in octal. |
|s |string of characters. [null-terminated string](https://en.wikipedia.org/wiki/Null-terminated_string). |
|c |char (character). |
|p |void* (pointer to void) in an implementation-defined format. |
|a, A |double in hexadecimal notation, starting with 0x or 0X. a uses lower-case letters, A uses upper-case letters.[[5]](https://en.wikipedia.org/wiki/Printf_format_string#cite_note-5)[[6]](https://en.wikipedia.org/wiki/Printf_format_string#cite_note-6) (C++11 iostreams have a hexfloat that works the same). |
|n |Print number of characters written by this printf.

## Escape sequences
The \n used in the `printf` statements is called an escape sequence. In this case it represents a newline character. After printing something to the screen you usually want to print something on the next line. If there is no \n then a next `printf` command will print the string on the same line. Commonly used escape sequences are:
| Character | Description   |
|--|--|
|\n  | new line  |
|\t | tab |
|\v | vertical tab|
|\f | new page |
|\b | backspace |
|\r | carriage return |

## Resources

**Read or watch**:

-   [Secrets of printf](https://intranet.hbtn.io/rltoken/VUKsf4GzSLQ6jD07Q8jyMQ "Secrets of printf")
-   **Group Projects**  concept page (_Don’t forget to read this_)
-   **Flowcharts**  concept page

**man or help**:

-   `printf (3)`
- `man_3_printf` : our own manual page that we created for **_printf (3)** function

## Requirements

### General

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called  `main.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the  `_putchar`  function for this project

### GitHub

**There should be one project repository per group.**

## More Info

### Authorized functions and macros

-   `write`  (`man 2 write`)
-   `malloc`  (`man 3 malloc`)
-   `free`  (`man 3 free`)
-   `va_start`  (`man 3 va_start`)
-   `va_end`  (`man 3 va_end`)
-   `va_copy`  (`man 3 va_copy`)
-   `va_arg`  (`man 3 va_arg`)

### Compilation

-   Your code will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```

-   As a consequence, be careful not to push any c file containing a  `main`  function in the root directory of your project (you could have a  `test`  folder containing all your tests files including  `main`  functions)
-   Our main files will include your main header file (`main.h`):  `#include main.h`
-   You might want to look at the gcc flag  `-Wno-format`  when testing with your  `_printf`  and the standard  `printf`. Example of test file that you could use:

## :busts_in_silhouette:  About us :dart:

This, is the first group project at Holberton School ! :school: :computer:<br/>
We hope you enjoy our project ! :smile:<br/>
For more questions, don't hesitate to contact us in our links down below. :wink:<br/>
Made by: 
* **Yeh-Hsin (mia) Lee**: [Github](https://github.com/mimi-fOlle) / [Linkedin](https://www.linkedin.com/in/yeh-hsin-lee-74922a23b/)
* **Chong Leang Ueng:** [Github](https://github.com/ChongLeangUENG) / [Linkedin](https://www.linkedin.com/in/chong-leang-ueng-78521b23b/)
* **Iker Lubamba Mbambi**: [Github](https://github.com/ikerikks) / [Linkedin](https://www.linkedin.com/in/iker-lubamba-28688b230/)

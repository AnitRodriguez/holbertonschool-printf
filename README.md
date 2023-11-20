
# _printf
A formatted output conversion C program completed as part of the low-level programming and algorithm track at Holberton School. The program is a pseudo- recreation of the C standard library function, printf.



## Dependencies
The _printf function was coded on an Ubuntu 20.04.4 LTS
## Useage
To use the _printf function, assuming the above dependencies have been installed, compile all .c files in the repository and include the header main.h with any main function.

## Description
int _printf(const char *format, ...)

This function produces output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg are converted for output.

The format string is composed of zero or more directives:

* Ordinary characters that are copied unchanged to the output stream. (except %)
* Conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification starts with the character %, ends with a conversion specifier ( which is a letter).

The conversion specifier:

The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion specifiers:

d: decimal number to be provided for printing.

i: integer to be provided for printing

c: character to be provided for printing

s: ...The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

%: A per cent sign '%' is written. No argument is converted.

Return value:

Upon success, _printf return the number of characters printed (excluding the null byte used to end output to strings) A negative 1 is returned if an output error is encountered.


### int (*functions(const char *format))(va_list)
His function called by _printf() and checks for valid conversion specifier when it finds a '%' character. The *functions function will check for the right conversion specifier. Upon valid specifier, it returns the corresponding function.
### int print_char(va_list list)
This function gets a variadic argument and prints each character of char type.
### int print_string(va_list list)
This function gets a variadic argument, traverse the string, and prints a character at a time.
### int print_percent(va_list P)
This function prints a percent sign '%'.

### int _putchar(char c)
Writes the character c to standard output.

## Flowchart
![Flowchart](https://iili.io/JnSnVPR.jpg)


## Authors

- [Eithan Tabarez](https://www.github.com/Eithan-Tabarez)

- [Anit Rodriguez](https://github.com/AnitRodriguez)

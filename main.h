#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct sh
{
	char *c;
	int (*f)(va_list args);
} sh_t;

int _putchar(char c);
int (*functions(const char *format))(va_list);
int print_percent(va_list P);
int print_char(va_list list);
int print_integer(va_list list);
int print_string(va_list list);
int _printf(const char *format, ...);

#endif

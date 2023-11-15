#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct sh
{
	char *sh;
	int (*f)(va_list <nombre lista/>);
} sh_t;

int _putchar(char c);
int print%(va_list P);
int print_char(va_list list);
int print_integer(va_list list);
int print_string(va_list list);
int _printf(const char *format, ...);

#endif

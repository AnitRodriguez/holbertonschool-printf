#include "main.h"

/**
 * print_char - Print a char.
 * @list: va_list.
 *
 * Return: always 1.
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));

	return (1);
}

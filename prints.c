#include "main.h"

/**
 * print_string - Print a string.
 * @list: list.
 *
 * Return: string length.
 */

int print_string(va_list list)
{
	int j;
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}

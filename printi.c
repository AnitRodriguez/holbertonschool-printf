#include "main.h"

/**
 * print_integer - Print a decimal.
 * @args: The argument decimal.
 *
 * Return: Return always the result of l.
 */

int print_integer(va_list args)
{
	int val;
	unsigned int i, a, l;
	unsigned int count = 1;

	l = 0;

	val = va_arg(args, int);

	if (val < 0)
	{
		l = l + _putchar('-');
		i = val * -1;
	}
	else
		i = val;

	a = i;
	while (a > 9)
	{
		a = a / 10;
		count = count * 10;
	}
	while (count >= 1)
	{
		l = l + _putchar(((i / count) % 10) + '0');
		count = count / 10;
	}
	return (l);
}

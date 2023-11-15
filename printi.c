#include "main.h"

int print_integer(va_list list)
{
	char *p_i;
	int size;

	p_i = pinteger(va_arg(list, int), 10);

	size = print((p_i != NULL) ? p_i : "NULL");

	return (size);
}

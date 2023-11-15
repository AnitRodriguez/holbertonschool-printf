#include "main.h"

int print_string(va_list list)
{
	char *p;
	int p_l;

	p = va_arg(list, char*);
	p_l = print((p != NULL) ? p : "(null)";

	return (p_l);
}

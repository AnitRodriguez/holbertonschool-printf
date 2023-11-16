#include "main.h"

/**
 *
 *
 *
 */

int (*functions(const char *format))(va_list)
{
	int i;
	sh_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	for (i = 0; p[i].c; i++)
	{
		if (*format == *(p[i].c))
		{
			return (p[i].f);
		}
	}
	return (NULL);
}

#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * find_function - finds format
 * @format: pointer
 * Return: Always 0
 */
int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};

	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].f);
		i++;
	}
	return (NULL);
}
/**
 * _printf - produces output according to format
 * @format: pointer to f.
 * Return: Always o
 */
int _printf(const char *format, ....)
{
	int s;
	va_list args;

	if (format == NULL)
		return (-1);

	s = _str(format);
	if (s <= 0)
		return (0);

	va_start(args, format);
	s = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (s);
}


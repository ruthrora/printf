#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - writes character c to stdout
 * @c: character to print
 *
 * Return: Always 0
 */
int print_char(va_list c)
{
	unsigned char i;

	i = va_arg(c, int);
	_putchar(i);
	return (1);
}
/**
 * print_porcentage - %
 *
 * Return: always 0
 */
int print_porcentage - %
{
	_putchar('%');
	return (1);
}

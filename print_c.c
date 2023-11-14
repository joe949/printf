#include "main.h"
/**
 * print_c - functio that prints a character
 * @ag: arguments
 *
 * Return: 1
 */
int print_c(va_list ag)
{
	char c;

	c = va_arg(ag, int);
	print_chr(c);
	return (1);
}

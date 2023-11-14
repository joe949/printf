#include "main.h"
/**
 * print_s - function that prints a string
 * @ag: arguments
 *
 * Return: lenght of string
 */
int print_s(va_list ag)
{
	char *s;
	int i, len;

	s = va_arg(ag, char *);

	if  (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			print_chr(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			print_chr(s[i]);
		return (len);
	}
}

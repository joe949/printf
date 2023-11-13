#include "main.h"
/**
 * _printf - functon that produces output according to format
 * @format: input string
 * Return: nmber of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
			{
				print_chr(va_arg(args, int));
			}
			else if (*format == 's')
			{
				const char *str = va_arg(args, const char *);

				while (*str != '\0')
				{
					print_chr(*str);
					count++;
					str++;
				}
			}
			else if (*format == '%')
			{
				print_chr('%');
			}
		}
		count++;
		format++;
	}
	va_end(args);
	return (count);
}

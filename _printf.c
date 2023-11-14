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

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'c')
			{
				count += print_chr(va_arg(args, int));
			}
			else if (*format == 's')
			{
				const char *str = va_arg(args, const char *);

				while (*str != '\0')
				{
					count  += print_chr(*str++);
				}
			}
			else if (*format == '%')
			{
				count += print_chr('%');
			}
		}
		else
		{
			count += print_chr(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

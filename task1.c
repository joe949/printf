#include "main.h"

/**
 * _printf - custom printf function for d and i specifiers
 * @format: format string
 * Return: num of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				count += printf("%d", va_arg(args, int));
			}
			else
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

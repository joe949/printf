#include "main.h"
/**
 * _printf - functon that produces output according to format
 * @format: input string
 *
 * Return: nmber of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					{
						const char *str = va_arg(args, const char *);
						while (*str != '\0')
						{
							_putchar(*str);
							count++;
							str++;
						}
					}
					break;
				case '%':
					_putchar('%');
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(*format);
		}
		count++;
		format++;
	}
	va_end(args);
	return (count);
}

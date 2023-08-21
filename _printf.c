#include "main.h"

/**
 * _printf - print endless args
 * @format: the first char pointer
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, r_val = 0;

	va_list args;

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	if (format[0] == '%' && format[1] == 32)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar((char)(va_arg(args, int)));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			r_val += _putstr(va_arg(args, char *));
			r_val--;
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else 
			return (-1);

		r_val += 1;
	}
	va_end(args);

	return (r_val);
}

#include "main.h"
/**
*_printf - prouduces  an output according to the format given to it.
*@format: The character string to be printed
*Return: Returns number of characters printed or (null ) or -1
*/
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == 32)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			print_character(*format, &char_count);
		}
		else
		{
			conversion_handler(format, args, &char_count);
			format++;
		}
		format++;

	}
	va_end(args);
	return (char_count);

}

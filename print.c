#include "main.h"
/**
*_printf - prouduces  an output according to the format given to it.
*@format: The character string to be printed
*Return: Returns number of characters printed or (null ) or -1
*/
int _printf(const char *format, ...)
{
	int char_count = 0, string_length;
	va_list args;
	char *str, character;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == 32)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			char_count++;
			write(1, format, 1);
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				character = (char)va_arg(args, int);
				if (character == '\0')
				{
					write(1, "(null)", 6);
					char_count +=6;
				}
				else
				{
					write(1, &character, 1);
					char_count++;
				}

			}
			else if (*format == 's')
			{
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(null)";
				string_length = strlen(str);
				write(1, str, string_length);
				char_count += string_length;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				char_count++;
			}
			else
			{
				write(1, "%", 1);
				char_count++;
				if (*format != '\0')
				{
					write(1, format, 1);
					char_count++;
				}
			}
		}
		format++;

	}
	va_end(args);
	return (char_count);

}

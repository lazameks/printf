#include "main.h"
/**
*conversion_handler - checks the specified format and print
*@format: the character string to be printed
*@args: argument list
*@char_count: counts total characters printed
*/
void conversion_handler(const char *format, va_list args, int *char_count)
{
	char character, *str;

	format++;
	if (*format == 'c')
	{
		character = (char)va_arg(args, int);
		print_character(character, char_count);
	}
	else if (*format == 's')
	{
		str = va_arg(args, char*);
		print_string(str, char_count);
	}
	else if (*format == '%')
	{
		print_character('%', char_count);
	}
	else
	{
		print_character('%', char_count);
		if (*format != '\0')
		{
			print_character(*format, char_count);
		}
	}


}

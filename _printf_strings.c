#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1, On error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putstr - prints a string
 * @s: the string to be printed
 *
 * Return: r_val
 */
int _putstr(char *s)
{
	int len = 0, r_val = 0;
	if (s == NULL)
		return (-1);
	else
	{
		while (*(s + len))
		{
			_putchar(*(s + len++));
			r_val += 1;
		}
		return (r_val);
	}
}
/**
*_str_len - calculates the length of the string
*@str: string to be calculated
*Return: length of string
*/
int _str_len(char *str)
{
	int len = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len - 1);
}

#include "main.h"

/**
 * print_character - write the character c to stdout
 * @c: the character to print
 *@char_count: pointer to the character count
 * Return: void
 */
void print_character(char c, int *char_count)
{
	(write(1, &c, 1));
	(*char_count)++;
}

/**
 * print_string - prints a string
 * @s: the string to be printed
 *@char_count: pointer to the character count.
 * Return: nothing
 */
void print_string(const char *s, int *char_count)
{
	int string_length;

	if (s == NULL)
	{
		s = "(null)";
	}
	string_length = strlen(s);
	write(1, s, string_length);
	(*char_count) += string_length;
}

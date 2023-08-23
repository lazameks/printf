#include <stdio.h>
#include "main.h"
/**
*print_integer - prints integers to stdout
*@num: number to be printed.
*@char_count: pointer to character count
*Return: nothing
*/
void print_integer(int num, int *char_count)
{
	char minus_sign, digit_char;

	if (num < 0)
	{
		num = -num;
		minus_sign = '-';
		write(1, &minus_sign, 1);
		(*char_count)++;
	}
	if (num >= 10)
	{
		print_integer(num / 10, char_count);
	}
	(*char_count)++;
	digit_char = num % 10 + '0';
	write(1, &digit_char, 1);
}

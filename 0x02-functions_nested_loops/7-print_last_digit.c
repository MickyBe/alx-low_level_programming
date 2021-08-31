#include "holberton.h"

/**
 *print_last_digit - prints the last of a number
 *
 *@r: stores the last digit and goes through the condtional statements
 *
 *main - evaluates last digit
 *
 *Return: the value of the last digit
 */

int print_last_digit(int r)

{
	int remainder = r % 10;

	if (r < 0)
	{
		r = r * -1;

		_putchar(r % 10 + '0');
		return (r % 10);
	}
	else
	{
		_putchar(remainder + '0');
		return (r % 10);
	}
}

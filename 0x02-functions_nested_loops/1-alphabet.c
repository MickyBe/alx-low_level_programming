#include "holberton.h"

/**
 *print_alphabet- prints out all the lowercase numbers from a -z
 *
 *main - printing out the alphabet
 *
 *Return: Always 0.
 */

void print_alphabet(void)

{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

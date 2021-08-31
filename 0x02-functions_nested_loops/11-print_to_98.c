#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - printing numbers up to or down until 98
 *
 *@n: This variable is used to compare certain conditions.
 *
 *Return: value will return void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

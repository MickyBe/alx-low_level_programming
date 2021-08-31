#include "holberton.h"
/**
 *_abs - absolute value
 *
 *@r: evalutates the value stored in x through the conditional
 *
 *main - printing the absolute value of a number
 *
 *Return: The value will return 0
 */

int _abs(int r)

{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}

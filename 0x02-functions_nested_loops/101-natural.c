#include <stdio.h>
/**
 *main - printing out the sum of all multiples of 3 or 5 below 1024.
 *Return: The value will return 0.
 */

int main(void)
{
	int i, n;

	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n = n + i;
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}

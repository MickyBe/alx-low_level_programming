#include <stdio.h>

/**
 *main - printing the first 50 Fibonacci starting with 1 and 2
 *Return: This will return 0
 *
 */

int main(void)
{
	long int i, f, s, t;

	f = 0;
	s = 1;
	i = 0;
	while (i < 50)
	{
		t = f + s;
		printf("%ld", t);
		if (i < 49)
		{
			printf(", ");
		}
		f = s;
		s = t;
		i++;
	}
	printf("\n");
	return (0);
}

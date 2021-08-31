#include <stdio.h>

/**
 *main - printing the sum of the even-valued terms
 *that do not exceed 4 million.
 *
 *Return: The value will return 0.
 */

int main(void)

{
	long int f, s, e, t;

	e = 0;
	f = 0;
	s = 1;
	while (t < 4000000)
	{
		t = f + s;
		f = s;
		s = t;
		if (t % 2 == 0)
		{
			e = e + t;
		}
	}
	printf("%ld\n", e);
	return (0);
}

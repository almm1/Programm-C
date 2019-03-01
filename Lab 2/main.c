#include <stdio.h>

int main()
{
	float s, a;
	int n, i, sign;

	printf ("n = ");
	scanf ("%d", &n);

	s = 0;
	sign = 1;
	i = 0;

	while (i < n)
	{
		a = (i + 1) / (pow(2, i));
		s = s + a * sign;
		sign = -sign;
		i = i + 1;
	}
	printf("s = %f\n", s);
}

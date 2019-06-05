#include <stdio.h> 

void two(int N)
{
	for (int i = 31; i >= 0; --i)
	{
		printf("%d", (N & (1 << i)) ? 1 : 0);
		if (i % 8 == 0)
			printf(" ");
	}
	printf("\n");
}

int main()
{
	unsigned long x = 0;
	printf("x = ");
	scanf("%d", &x);

	two(x);
	x = (x & 0xAAAAAAAA) >> 1 | (x & 0x55555555) << 1;
	two(x);
	printf("x = %d", x);
	return 0;
}

	return 0;
}

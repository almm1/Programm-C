#include <stdio.h> 

int main()
{
	int x = 0;
	int temp = 0;
	int mask = 0b0;
	int d = 4;
	unsigned int res_x = 0;

	printf("x = ");
	scanf_s("%x", &x);
	res_x = (unsigned int)x;

	for (int i = 0; i < sizeof(res_x) * 8; i++)
	{
		temp = res_x;
		res_x <<= 1;
		res_x >>= 1;

		if (res_x == temp)
		{
			mask |= (0 << 31 - i - d);
		}
		else
		{
			mask |= (1 << 31 - i - d);
		}
		if ((i + 1) % 4 == 0)
		{
			d = d - 8;
		}
		if ((i + 1) % 8 == 0)
		{
			d = 4;
		}
		res_x <<= 1;
	}

	printf("x = %x\n", mask);

	return 0;
}

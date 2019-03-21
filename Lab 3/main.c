#include <pch.h>
#include <stdio.h>
#define YES 1
#define NO 0

int main()
{
	int cnt, c, c_2, flag;
	cnt = 0; //счетчик
	flag = NO; //признак
	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '.') || (c == ',') || (c =='\n'))
		{
			flag = NO;
			c_2 = ' ';
		}
		else
		{
			if (flag == NO)
			{
				flag = YES;
				c_2 = c;
			}
			else
			{
				if (c_2 == c)
				{
					cnt++;
					c_2 = ' ';
				}
				else
					c_2 = ' ';
			}
		}
	}
	printf("number = %d\n", cnt);
	return 0;
}

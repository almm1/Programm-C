#include <pch.h>
#include <stdio.h>
#define YES 1
#define NO 0

int main()
{
	int cnt, c, c_2, flag, ch_cnt, found;
	cnt = 0; //счетчик
	flag = NO; //признак слова
	found = NO; //индикатор обнаружения признака
	ch_cnt = 0; //счетчик символов внутри слова
	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '.') || (c == ',') || (c == '\n'))
		{
			ch_cnt = 0;
			c_2 = ' ';
			if (flag == YES)
			{
				if (found == YES)
				{
					cnt++;
				}
			}
			flag = NO;
		}
		else
		{
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				ch_cnt++;
				if (ch_cnt == 1)
				{
					c_2 = c;
				}
				if (ch_cnt == 2)
				{
					flag = YES;
					if (c-'a' == c_2-'A' || c-'A' == c_2-'a'|| c == c_2)
					{
						found = YES;
					}
					else
					{

						found = NO;
					}
				}
			}
			else
			{
				c_2 = ' ';
				flag = NO;
			}
		}
	}
	printf("number = %d\n", cnt);
	return 0;
}

#include "pch.h"
#include <stdio.h>

#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line(char buffer[]);

int main(void)
{
	char line[MAXLINE];
	gets_s(line);
	process_line(line);
	puts(line);
	return 0;
}
void process_line(char buffer[])
{
	char c;
	int flag, found, i, j, start, pos, symb;
	i = 0;
	start = 0;
	pos = 0;
	flag = NO;
	found = NO;
	symb = NO;


	do
	{
		c = buffer[i];
		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
		{
			if (flag == YES && found == NO && symb == NO || flag == YES && symb == YES)
			{
				for (j = start; j < i; j++)
				{
					buffer[pos++] = buffer[j];
				}
			}
			flag = NO;
			symb = NO;
			buffer[pos++] = c;
		}
		else
		{
			if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
			{
				symb = YES;
			}
			if (flag == NO)
			{
				start = i;
				{
					if ((c == 'a') || (c == 'o') || (c == 'i') || (c == 'e') || (c == 'u') || (c == 'y') || (c == 'A') || (c == 'O') || (c == 'I') || (c == 'E') || (c == 'U') || (c == 'Y'))
					{
						found = YES;
					}
					else
					{
						found = NO;
					}
				}
			}
			flag = YES;
		}
		i++;
	} while (c != '\0');
}

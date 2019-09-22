#include <stdio.h>

#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line(char buffer[]);

int main(void)
{
	char line[MAXLINE];
	gets_s(line);
	printf("\n");
	process_line(line);
	puts(line);
	return 0;
}
void process_line(char buffer[])
{
	char c;
	int flag, found, i, symb;
	i = 0;
	flag = NO;
	found = NO;
	symb = NO;
	char *word_ptr = buffer;
	char *in_ptr = buffer;
	char *out_ptr = buffer;


	do
	{
		c = *in_ptr;
		if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
		{
			if (flag == YES && found == NO && symb == NO || flag == YES && symb == YES)
			{
				while (word_ptr < in_ptr)
					*out_ptr++ = *word_ptr++;
			}
			flag = NO;
			symb = NO;
			*out_ptr++ = c;
		}
		else
		{
			if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
			{
				symb = YES;
			}
			if (flag == NO)
			{
				word_ptr = in_ptr;
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
		in_ptr++;
	} while (c != '\0');
}

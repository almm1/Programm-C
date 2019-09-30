#include <stdio.h>
#include <iostream>
#define YES 1
#define NO 0
#define MAXLINE 1000

void process_line(char buffer[]);

int main(void)
{
	setlocale(LC_ALL, "Russian");
	char line[MAXLINE];
	printf("Введите строку: ");
	gets_s(line);
	printf("Исходная строка: %s", line);
	process_line(line);
	printf("\nзагрузка ... \n");
	printf("Результат: ");
	puts(line);
	return 0;
}
void process_line(char buffer[])
{
	char c; // текущий символ
	int flag, found, symb;
	flag = NO; // признак слова
	found = NO; // искомый признак
	symb = NO; // признак не слова
	char *word_ptr = buffer; // указатель на начало слова
	char *in_ptr = buffer; // указатель на текущий символ входной строки
	char *out_ptr = buffer; // указатель на текущий символ выходной строки


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

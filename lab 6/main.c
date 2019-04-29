#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

#define N 10 //число строк
#define K 10 //число столбцов

int main(void)
{
	int x[N][K]; //массив
	int min; //минимальный элемент
	int n, m; // индексы минимального элемента
	int i, j; // индексы массива 
	srand(time(NULL)); // рандом 

	//ввод массива 
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			x[i][j] = rand() % 10;  
			printf("%4d ", x[i][j]); 
		}
		printf("\n");
	}
	min = x[i][j];
	// поиск минимального элемента
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (min > x[i][j])
			{
				min = x[i][j]; 
				n = i;
				m = j;
			}
		}
	}
	printf("\n");
	// обнуление, вывод результирующего массива 
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i > n )
			{
				x[i][j] = 0;
			}
			printf("%4d ", x[i][j]); 
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

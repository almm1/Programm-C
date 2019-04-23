#include <stdio.h>
#define N 10

int main(void)
{
	int x[N]; // массив из N элементов
	int max; // максимальный элемент
	int min; // минимальный элемент
	int m = 0; //индекс максимального элемента
	int n = 0; // индекс минимального 
	int i;
	max = min = 0;

	for (i = 0; i < N; i++) //ввод массива
	{
		scanf("%d", &x[i]);
	}
	for (i = 0, max = min = x[i]; i < N; i++) //поиск минмального и максимального элемента
	{
		if (max < x[i])
		{
			max = x[i];
			m = i;
		}
		if (min > x[i])
		{
			min = x[i];
			n = i;
		}
	}
	x[m] = min;
	x[n] = max;
	for (i = 0; i < N; i++) // вывод массива
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
	int i, j, a=0;
	int abc[SIZE] = { 0 };
	printf("請輸入5個數字:\n");
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &abc[i]);

	}

	for (j = 0; j < SIZE; j++)
	{
		if (abc[j]>a)
		{
			a = abc[j];
		}
	}

	printf("最大數值為:%d", a);
	system("pause");
	return 0;
}
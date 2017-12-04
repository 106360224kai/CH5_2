#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7
#define ABC 13
int main(void)
{
	int face, roll,c,d,e,i;
	float z,total=0;
	float sum[ABC] = { 0 };

	srand(time(NULL));

	for (roll = 1; roll <= 600; roll++)
	{
		face = 1 + rand() % 6;
		for (c = 1; c <= 60; c++)
		{
			d = 1 + rand() % 6;
			e = d + face;
		
			++sum[e];
		}
	}

	printf("%s%17s\n", "Face", "Frequency");

	for (face = 2; face < 13; face++)
	{
		printf("%4d        %.f\n", face, sum[face]);

	}

	for (i = 0; i < ABC; i++)
	{
		total += sum[i];
	}

	
	z =   sum[7] / total;
	z = z * 100;
	
	printf("總共次數:%.f\n", total);
	printf("總和為7出現的機率為%.2f%%\n", z);
	

	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

void abc(char x[],int i, int y);

int main()
{
	int i = 0;
	char string[20];
	
	printf("請輸入一段字串:");
	scanf("%19s", string);
	size_t length = strlen(string);

	abc(string,i,length);
	
	system("pause");
	return 0;
}

void abc(char x[],int i, int y)
{
	
	if (i < y)
	{
		abc(x, i+1,y);
		printf("%c", x[i]);
	}
}
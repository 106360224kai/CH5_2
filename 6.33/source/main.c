#include<stdio.h>
#include<stdlib.h>
#define SIZE 15

int binarysearch(const int b[], int search, int low, int high);
void printheader(void);
void printrow(const b[], int low, int mid, int high);

int main(void)
{
	int a[SIZE];
	int i, key, result;

	for (i = 0; i < SIZE; i++)
	{
		a[i] = 2 * i;
	}

	printf("%s", "Enter a number between 0 to 28: ");
	scanf("%d", &key);

	printheader();

	result = binarysearch(a, key, 0, SIZE - 1);

	if (result != -1)
	{
		printf("\n%d found in array element %d\n", key, result);
	}
	else
	{
		printf("\n%d not found\n", key);
	}

	system("pause");
	return 0;

}

int binarysearch(const int b[], int search, int low, int high)
{
	int mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printrow(b, low, mid, high);
		if (search == b[mid])
		{
			return mid;
		}
		else if (search < b[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}

void printheader(void)
{
	unsigned int i;
	puts("\nSubscripts:");

	for (i = 0; i < SIZE; ++i)
	{
		printf("%3u", i);
	}
	puts("");

	for (i = 1; i <= 4 * SIZE; ++i)
	{
		printf("%s", "-");
	}
	puts("");
}

void printrow(const b[], int low, int mid, int high)
{
	int i;
	for (i = 0; i < SIZE; ++i)
	{
		if (i<low || i>high)
		{
			printf("%s", "   ");
		}
		else if (i == mid)
		{
			printf("%3d*", b[i]);
		}
		else
		{
			printf("%3d", b[i]);
		}
	}
	puts("");
}
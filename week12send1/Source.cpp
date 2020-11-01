#include <stdio.h>
int main()
{
	int num[5], x, y, temp;
	printf("Sort 5 numbers\n");
	printf("Enter 5 numbers,seperate by space\n");
	printf("Enter number  ");
	scanf_s("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	for (x = 0; x < 5; x++)
	{
		for (y = x + 1; y < 5; y++)
		{
			if (num[y] < num[x])
			{
				temp = num[x];
				num[x] = num[y];
				num[y] = temp;
			}
		}
	}
	printf("Number is ");
	for (x = 0; x < 5; x++)
	{
		printf("%d\t", num[x]);
	}
}
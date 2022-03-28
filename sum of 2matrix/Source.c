// Program to do sum of two matrix

#include<stdio.h>

int main()
{
	int arry1[2][3],arry2[2][3],arry3[2][3], i, j;

	printf("Enter First Matrix:\n");
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 2; j++)
				scanf_s("%d", &arry1[i][j]);
		}

	printf("Enter Second Matrix:\n");
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 2; j++)
				scanf_s("%d", &arry2[i][j]);
		}
	printf("Sum Of Two Matrix is:\n");
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 2; j++)
			{
				arry3[i][j] = arry1[i][j] + arry2[i][j];
				printf("%d", arry3[i][j]);
			}
			printf("\n");
		}
	return(0);
}
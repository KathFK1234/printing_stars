#include <stdio.h>

/**
 * main - Entry point
 * Return: Nothing
 */

int main(void)
{
	int n = 5;
	int i, j, k;

	for (i = 1; i<= n; i++)
	{
		for (k = i; k <= n; k++)
		{
			printf("  ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

#include <stdio.h>

/**
 * main - Entry point
 * Return: Nothing
 */

int main(void)
{
	int n = 5;
	int i, j;

	for (i = 1; i<= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

#include "main.h"
#include <stdio.h>
/**
*print_to_98 - entry point
*@n: input
*Return: 0 (success)
*/
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else if (i == 98)
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for (j = n; j <= 98; j--)
		{
			if (j != 98)
			{
				printf("%d, ", j);
			}
			else if (j == 98)
			{
				printf("%d", j);
			}
		}
	}
}

#include "main.h"
#include <stdio.h>
/**
*print_to_98 - entry point
*@n: input
*Return: 0 (success)
*/
void print_to_98(int n)
{
	int n;
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);
		}
	else
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	}
printf("98\n");
}

#include "main.h"
#include <stdio.h>
/**
*print_time_table - entry point
*@n: input
*/
void print_time_table(int n)
{
/**	
  *int i, j, k;
	*if (n >= 0 && n <= 15)
	*{
		*for (i = 0; i <= n; n++)
		*{
			*for (j = 0; j <= n; j++)
			*{
				*k = j * i;
				*if (j == 0)
				*{
					*_putchar(k + '0');
				*}
				*else if (k < 10 && j != 0)
				*{
					*_putchar(',');
					*_putchar(' ');
					*_putchar(' ');
					*_putchar(' ');
					*_putchar(k + '0');
				*}
				*else if (k >= 10 && k < 100)
				*{
					*_putchar(',');
					*_putchar(' ');
					*_putchar(' ');
					*_putchar((k / 10) + '0');
					*_putchar((k % 10) + '0');
				*}
				*else if (k >= 100)
				*{
					*_putchar(',');
					*_putchar(' ');
					*_putchar((k / 100) + '0');
					*_putchar(((k / 10) % 10) + '0');
					*_putchar((k % 10) + '0');
				*}
			*}
			*_putchar('\n');
		*}
	}*
	*/
int i;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= 10; i++)
{
printf("%d x %d = %d\n", n, i, n * i);
}
}
int main(void)
{
int n = 5;
print_times_table(n);
return 0;
}

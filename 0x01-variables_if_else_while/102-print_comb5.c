#include <stdio.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
int i, j;
int count = 0;
for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
count += 6;/*Increment count for the characters printed*/
if (count == 34649)
{
break;/*Terminate the loops once the desired count is reached*/
}
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
if (count == 34649)
{
break;/*Terminate the outer loop once the desired count is reached*/
}
}
putchar('\n');
return (0);
}

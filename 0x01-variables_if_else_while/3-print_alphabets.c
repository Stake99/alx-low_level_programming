#include <stdio.h>
/**
*main - entry point
*Return: 0 (success)
*/
int main(void)
{
int n = 97;
int m = 65;
while (n <= 122)
{
putchar(n);
n++;
}
while (m <= 96)
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
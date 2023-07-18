#include "main.h"
/**
*print_alphabet_10x - prints alphabets 10 times
*Return: 0 (success)
* main - check the code for Holberton School students.
* Return: Always 0.
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_10x(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
}

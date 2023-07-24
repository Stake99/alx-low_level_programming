#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
int length = o;

while (s[length] != '\0')
{
	length++;
}
for (int i = length - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}

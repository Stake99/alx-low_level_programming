#include "main.h"
/**
*print_alphabet_10x - prints alphabets 10 times
*Return: 0 (success)
*/
void print_alphabet_10x(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}

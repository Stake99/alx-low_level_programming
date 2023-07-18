#include "main.h"
/**
*_isalpha - shows 1 if the input a is letter another cases,show 0
*
*@c: the character in ASCII
*
*Return: 1 for letters. 0 for the rest
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar ('\n');
}

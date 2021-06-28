#include "holberton.h"
/**
*print_rev - Print a string in reverse
*@s: pointer of type char
*
*
*Return: always returns 0.
*/
void print_rev(char *s)
{
int len;
for (len = 0; *s != '\0'; len++)
s++;
s--;
for (len = len; len != 0; len--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

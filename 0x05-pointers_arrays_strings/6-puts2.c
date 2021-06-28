#include "holberton.h"
/**
*puts2 - print every other character followed by a new line
*@str : pointer of type char.
*
*
*Return : always 0.
*/
void puts2(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
{
if (i % 2 == 0)
_putchar(*str);
str++;
}
_putchar('\n');
}

#include "main.h"
/**
*_puts - Prints a string, followed by a new line to stdout
*@str : Pointer of type char
*
*
*
*Return : always 0.
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

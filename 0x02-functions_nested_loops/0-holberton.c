#include "holberton.h"
/*
 *Main - main entry
 *Description - Print "Holberton"
 *Return - Always success
*/
int main(void)
{
char c[] = "Holberton";
int i;
for (i = 0; i < 9; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}

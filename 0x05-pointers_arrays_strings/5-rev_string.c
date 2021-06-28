#include "holberton.h"
/**
*rev_string : Reverse a string
*@s : pointer of char type
*
*
*Return : Always 0
*/
void rev_string(char *s)
{
int i, j;
char temp[500];
for (i = 0; *s != '\0'; i++)
{
temp[i] = *s;
s++;
}
s--;
for (j = 0; j != i; j++)
{
*s = temp[j];
s--;
}
s++;
}

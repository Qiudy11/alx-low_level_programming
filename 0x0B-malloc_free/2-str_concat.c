#include <stdlib.h>
#include "holberton.h"
/**
* str_concat - concatenates two strings
* @s1: input string 1
* @s2: input string 2
* Return: pointer to newly allocated space in memory with both strings or NULL
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, k, l;
char *s;
if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j]; j++)
;
}
k = i + j + 1;
s = malloc(k * sizeof(char));
if (s == NULL)
return (NULL);
for (l = 0; l < i; l++)
s[l] = s1[l];
for (l = 0; l < j; l++)
s[l + i] = s2[l];
s[i + j] = '\0';
return (s);
}

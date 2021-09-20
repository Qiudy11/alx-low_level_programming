#include "main.h"
/**
*_strlen - returns the length of a string
*@s: is a pointer char type
*Return: Always 0.
*/
int _strlen(char *s)
{
int len;
for (len = 0; *s != '\0'; len++)
s++;
return (len);
}

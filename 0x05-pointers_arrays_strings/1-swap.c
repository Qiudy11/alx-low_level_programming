#include "holberton.h"
/**
*swap_int - check the code for Holberton School Students.
*@*a: is a pointer int type
*@*b: is a pointer int type
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}

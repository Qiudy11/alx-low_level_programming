#include "holberton.h"
/**
*swap - check the code for Holberton School Students.
*@int *a: is a pointer int type
*@int *b: is a pointer int type
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}

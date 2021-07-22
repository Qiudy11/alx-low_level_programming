#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - fills memory with a constant byte
* @separator: is string
* @n: the amount of args
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
va_start(ap, n);
for(i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator != NULL && i != n-1)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}

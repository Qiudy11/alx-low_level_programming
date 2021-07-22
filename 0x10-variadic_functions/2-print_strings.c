#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - fills memory with a constant byte
* @separator: is string
* @n: the amount of args
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
va_end(ap);
printf("\n");
}

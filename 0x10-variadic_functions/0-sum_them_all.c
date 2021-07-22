#include<stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - sum of integers
*@n : number of arguement
*Return: sum of integers if n != 0
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i = 0;
va_list ap;
va_start(ap, n);
if (n == 0)
{
return (0);
}
else
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}

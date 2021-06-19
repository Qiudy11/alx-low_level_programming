#include<stdio.h>
/**
*main - main entry
*Desription: program that prints all numbers from 0-9
*Return: Always (Success)
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}

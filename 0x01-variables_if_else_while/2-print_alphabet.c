#include<stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the alphabets in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
  int x;
for (x = 'a'; x <= 'z'; x++)
    {
putchar(x);
putchar('\n');
    }
 return (0);
}

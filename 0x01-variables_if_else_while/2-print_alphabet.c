#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print the lowercase alphabet
 * Return: 0
 */
int main(void)
{
int x;

for (x = 0; x < 26; ++x)
putchar('a' + x);

putchar('\n');

return (0);
}

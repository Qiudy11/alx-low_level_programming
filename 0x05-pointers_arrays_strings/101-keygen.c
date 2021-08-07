#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - check the code for Holberton School students.
* 
* Return: Always 0.
*/
int main(void)
{
  int i;
    srand(time(0));
    for(i = 0; i<4; i++)
      printf(" %d ", rand());
   
  return 0;
}

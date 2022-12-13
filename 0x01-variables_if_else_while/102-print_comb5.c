#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int count;
unsigned long x=0, y=1, z;
for (count = 1; count <= 49; count++)
{
z = x + y;
printf("%lu", z);
x = x;
y = y;
if ( count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}

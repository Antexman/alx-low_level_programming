#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success0
*/

int main(void)
{
int count;
unsigned long x, y, z;
x = 0;
y = 1;
for (count = 1; count <= 49; count++)
{
z = x + y;
x = y;
y = z;
printf("%lu, ", z);
}
printf("%lu\n", z + x);
return (0);
}

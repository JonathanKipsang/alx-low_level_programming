#include "main.h"
/**
* flip_bits - count number of bits to be changed from number to next
* @n: first number
* @m: second number
*
* Return:no of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}


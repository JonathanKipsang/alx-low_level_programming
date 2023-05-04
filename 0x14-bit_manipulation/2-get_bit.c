#include "main.h"
/**
* get_bit - returns value of bit as index to decimal
* @n: number that needs to be searched
* @index: index bit
*
* Return: value bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}


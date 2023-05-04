#include "main.h"
/**
* set_bit - set bit for index to 1
* @n: pointer to te number that is meant to be changed
* @index: index of the bit that needs to be changed to 1.
*
* Return: 1 when success, -1 when fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}


#include "main.h"
/**
* clear_bit - sets value of a specific bit to 0
* @n: pointer to number that needs to be changed
* @index: inderx of bit to be cleared
*
* Return: return 1 for success and -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}


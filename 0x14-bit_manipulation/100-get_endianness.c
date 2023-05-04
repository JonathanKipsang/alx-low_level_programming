#include "main.h"
/**
* get_endianness - checks machine status
* Return: 0 if big 1 for small
*/
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}


#include "main.h"
#include <unistd.h>
/**
* _putchar - writes character c - standard out
* @c: character that needs to be printed
*
* Return 1 if successful
* error, -1 is returned, errno set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}


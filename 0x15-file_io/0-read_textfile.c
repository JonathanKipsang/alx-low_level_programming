#include "main.h"
#include <stdlib.h>
/**
* read_textfile- to the standard out
* @filename: read textfile
* @letters: no of letters that need to be read
* Return: w- the number of bites written and read
*        0 if function fails /filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}


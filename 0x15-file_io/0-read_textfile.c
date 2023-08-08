#include "main.h"

/**
 * read_textfile - reads and interpretes a text file and prints the letters that are present in the file 
 * @filename: filename. present 
 * @letters: num of letters printed in the code below
 *
 * Return: with num of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nrd, nwr;
char *buffer;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * (letters));
if (!buffer)
return (0);
nrd = read(fd, buffer, letters);
nwr = write(STDOUT_FILENO, buffer, nrd);
close(fd);
free(buffer);
return (nwr);
}

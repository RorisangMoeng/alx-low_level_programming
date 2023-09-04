#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text and prints to the standard output
 * @filename: text file
 * @letters: number of letters
 * Return: 0 if file name is NULL, actual number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t w;
	ssize_t fd;
	char *buf;

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

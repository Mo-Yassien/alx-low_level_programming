#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * If the file cannot be opened or read, return 0.
 * If filename is NULL, return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filenamee, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(SYDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}

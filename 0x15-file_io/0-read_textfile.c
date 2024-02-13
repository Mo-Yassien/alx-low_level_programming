#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
	if (filename == NULL) {
		return (0);
	}

	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1) {
		return (0);
	}

	char *buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL) {
		close(file_descriptor);
		return (0);
	}

	ssize_t bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1) {
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read) {
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	close(file_descriptor);
	free(buffer);

	return (bytes_written);
}

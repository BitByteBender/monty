#include "monty.h"
/**
 * readLineFromFile - reads a line from file
 * @buffer: pointer to the buffer storing line
 * @lnCount: pointer
 * @file: file to read from
 * Return: number of chars read as ssize_t
 */
ssize_t *readLineFromFile(char **buffer, unsigned int *lnCount, FILE *file)
{
	size_t *size;
	ssize_t readdt = NULL;

	readdt = getline(buffer, size, file)

	if (readdt > 0)
	{
	(*lnCount)++;
	return (readdt);
	}
	else if (readdt == -1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, '\n', 1);
		free(*buffer);
		onExit(NULL, EXIT_FAILURE);
	}
	return (0);
}

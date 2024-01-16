#include "monty.h"
inline ssize_t getLine(char **, size_t *, FILE *, unsigned int);
/**
 * procFile - processes the file to be fed
 * @file: file to get processed
 * @data: pointer to the buffer storing the line
 * @line_number: pointer to the line_number
 */
void procFile(File *file, char *data, unsigned int line_number)
{
	size_t size = 0;
	ssize_t readData = 1;
	stack_t *stack = NULL;

	while (getLine > 0)
	{
	data = NULL;
	readData = getLine(&data, &line_number, file);
	line_number++;

	if (readData > 0)
		execCmd(data, &stack, line_number, file);
	free(data);
	}

	freeStack(stack);
}
/**
 * getLine - reads a line from file
 * @data: pointer to the buffer storing the line
 * @size: pointer to the size of the buffer
 * @file: file to read from
 * @line_number: pointer to the line_number
 * Return: number of chars read as ssize_t
 */
inline ssize_t getLine(char **data, size_t *size, FILE *file, int line_number)
{
	return (readLineFromFile(data, (unsigned int)line_number, file));
}

#include "monty.h"
/**
 * procFile - processes the file to be fed
 * @file: file to get processed
 * @data: pointer to the buffer storing the line
 * @line_number: pointer to the line_number
 */
void procFile(File *file, char *data, unsigned int line_number)
{
	stack_t *stack = NULL;
	size_t size = 0;
	ssize_t readData = 1;

	while (readData > 0)
	{
	data = NULL;
	readData = readCmd(&data, &size, &line_number, file);
	line_number++;

	if (readData > 0)
		execCmd(data, &stack, line_number, file);
	}

	free(data);
	freeStack(&stack);
}

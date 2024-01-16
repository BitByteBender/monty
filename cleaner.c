#include "monty.h"
/**
 * clean - frees allocated memory & close file stream
 * @stack: pointer to stack top
 * @file: pointer to processed file
 */
void clean(stack_t **stack, FILE *file)
{
	fclose(file);
	free(stContainer.data);
	freeStack(*stack);
}

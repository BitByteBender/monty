#include "monty.h"
/**
 * _exceptionHandler - handles pop exceptions during exec
 * @stack: pointer to the stack
 * @lnCount: line number wher exception occured
 */
void _exceptionHandler(stack_t **stack, unsigned int lnCount)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", lnCount);
	fclose(Cnt.file);
	free(Cnt.data);
	freeStack(*stack);
	exit(EXIT_FAILURE);
	/*
	 * fileCloser(*stack);
	 * free(Cnt.data);
	 * exit(EXIT_FAILURE);
	*/
}

#include "monty.h"

static instruction_t operations[] = {
	{"push", pushToStack},
	{NULL, NULL}
};

/**
 * execOpcode - executes the operation base on the opcode
 * @opcode: the operation code to be exec
 * @stack: pointer to the stack
 * @lnCount: Line_number
 * @file: pointer to the processed file
 */
void execOpcode(char *opcode, stack_t **stack, short lnCount, FILE *file)
{
	unsigned int i = 0;

	if (opcode && operations[i].opcode != NULL)
	{
		while (operations[i].opcode && opcode)
		{
			if (_strCmp(opcode, operations[i].opcode))
			{
			operations[i].f(stack, lnCount);
			return;
			}
			i++;
		}
	}
	else
		errHandler("", lnCount, stack, file);
}

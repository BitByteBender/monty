#include "monty.h"
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

	instruction_t operations[] = {
		{"push", pushToStack},
		{"pall", printAll},
		{NULL, NULL}
	};

	if (opcode)
	{
		while (operations[i].opcode)
		{
			if (strcmp(opcode, operations[i].opcode) == false)
			{
			operations[i].f(stack, lnCount);
			return;
			}
			i++;
		}
	}
	else
		errHandler("Err: NULL opcode", lnCount, stack, file);

	errHandler("opcode not found", lnCount, stack, file);
}

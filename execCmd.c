#include "monty.c"
#include "core.c"
/**
 * execCmd - executes command based on given data
 * @data: string that holds a cmd and args
 * @stack: pointer to the stack top
 * @lnCount: line_number in the file
 * @file: pointer to the processed file
 */
void execCmd(char *data, stack_t **stack, unsigned int lnCount, FILE *file)
{
	char *opcode = _strtok(data, DELIMITER);

	dtContainer.extractedArgs = _strtok(NULL, DELIMITER);

	execOpcode(opcode, stack, lnCount, file);
}

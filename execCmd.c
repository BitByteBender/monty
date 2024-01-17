#include "monty.c"
#include "core.c"
/**
 * execCmd - executes command based on given data
 * @data: string that holds a cmd and args
 * @stack: pointer to the stack top
 * @lineCount: line_number in the file
 * @file: pointer to the processed file
 */
void execCmd(char *data, stack_t **stack, unsined int lineCount, FILE *file)
{
	char *opcode, *argsHolder;

	opcode = _strtok(data, DELIMITER);
	argsHolder = _strtok(NULL, DELIMITER);

	if (argsHolder)
	{
	Cnt.extractedArgs = _strdup(argsHolder);
	if (Cnt.extractedArgs == NULL)
	{
		printf(stderr, "Err: strdup failure\n");
		clean(stack, file);
		exit(EXIT_FAILURE);
	}
	}
	execOpcode(opcode, stack, lineCount, file);

	if (data)
		free(data);

	if (Cnt.extractedArgs)
	{
	free(Cnt.extractedArgs);
	Cnt.extractedArgs = NULL;
	}
}

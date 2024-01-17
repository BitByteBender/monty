#include "monty.h"
/**
 *
 */
void trigger(int lnCount, char **args)
{

}
/**
 *
 */
void onExit(stack_t **stack, int log)
{
	free_stack(stack);

	if (Cnt.extractedArgs)
		free(Cnt.extractedArgs);

	exit(log);
}

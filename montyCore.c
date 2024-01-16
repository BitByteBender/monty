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
void onExit(stack_t *stack, int log)
{
	free_stack(stack);
	exit(log);
}

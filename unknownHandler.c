#include "monty.h"
/**
 * handleUnk -
 * @lc: 
 * @oc: 
 * @fl: 
 * @dt: 
 * @stack:
 */
void handleUnk(int lc, char *oc, FILE *fl, char *dt, stack_t **stack)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", lc, oc);
	fclose(fl);
	free(dt);
	freeStack(stack);
	exit(EXIT_FAILURE);
}

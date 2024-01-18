#include "monty.h"
/**
 * Exe -
 * @oc:
 */
int Exe(char *oc, stack_t **sk, unsigned int lc, FILE *fl, instruction_t *op)
{
	unsigned short i = 0;
	(void)fl;

	while (op[i].opcode && oc)
	{
		if (strcmp(oc, op[i].opcode) == 0)
		{
		op[i].f(sk, lc);
		return (0);
		}
		i++;
	}
	return (1);
}

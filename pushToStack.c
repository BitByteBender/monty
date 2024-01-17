#include "monty.h"
/**
 *
 */
void pushToStack(stack_t **stack, unsigned int lnCount) {
    checkPushArgs(Cnt.extractedArgs, lnCount, stack);

    int n = atoi(Cnt.extractedArgs);

    if (Cnt.switcher == 0)
        insertNode(stack, n);
   else
        insertQueue(stack, n, "Err: failed allocation\n");
}


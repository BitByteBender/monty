#include "monty.h"
/**
 *
 */
void checkPushArgs(const char *args, unsigned int lnCount, stack_t **stack) {
    if (args == NULL) {
        fprintf(stderr, "L%d: usage: err\n", lnCount);
        clean(stack, Cnt.file);
        exit(EXIT_FAILURE);
    }

    int j = (args[0] == '-') ? 1 : 0;

    while (args[j] != '\0') {
        if (args[j] < '0' || args[j] > '9') {
            fprintf(stderr, "L%d: usage: err\n", lnCount);
            clean(stack, Cnt.file);
            exit(EXIT_FAILURE);
        }
        j++;
    }

}

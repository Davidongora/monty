#include "monty.h"
/* Function to remove the top element of the stack */
void pop(stack_t **stack, unsigned int line_number) {
    if (*stack == NULL) {
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

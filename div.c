#include "monty.h"
/* Function to divide the top element into the second top element of the stack */
void div_op(stack_t **stack, unsigned int line_number) {
    if (*stack == NULL || (*stack)->next == NULL) {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0) {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n /= (*stack)->n;
    stack_t *temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

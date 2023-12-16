#include "monty.h"
/* Function to rotate the stack to the top */
void rotl(stack_t **stack) {
    if (*stack != NULL && (*stack)->next != NULL) {
        stack_t *last = *stack;
        while (last->next != NULL) {
            last = last->next;
        }

        last->next = *stack;
        *stack = (*stack)->next;
        last->next->next = NULL;
    }
}

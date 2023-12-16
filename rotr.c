#include "monty.h"
/* Function to rotate the stack to the bottom */
void rotr(stack_t **stack) {
    if (*stack != NULL && (*stack)->next != NULL) {
        stack_t *last = *stack;
        stack_t *second_last = NULL;

        while (last->next != NULL) {
            second_last = last;
            last = last->next;
        }

        second_last->next = NULL;
        last->next = *stack;
        *stack = last;
    }
}

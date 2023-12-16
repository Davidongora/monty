#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/* Function to print the string starting at the top of the stack */
void pstr(stack_t **stack) {
    stack_t *current = *stack;

    while (current != NULL && current->n != 0 && current->n >= 0 && current->n <= 127) {
        if (current->n >= 1 && current->n <= 127) {
            printf("%c", (char)(current->n));
        } else {
            break;
        }
        current = current->next;
    }
    printf("\n");
}

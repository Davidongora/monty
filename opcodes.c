#include <stdbool.h>
#include "monty.h"

/* Structure for stack */
typedef struct stack_s {
    int n;
    struct stack_s *next;
} stack_t;

stack_t *stack = NULL;
bool is_queue = false;

/* Function to switch the format of data to a stack (LIFO) */
void set_stack() {
    is_queue = false;
}

/* Function to switch the format of data to a queue (FIFO) */
void set_queue() {
    is_queue = true;
}

/* Function to push an element onto the stack or queue based on the current mode */
void push(int value) {
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    if (is_queue) {
        new_node->next = NULL;
        if (stack == NULL) {
            stack = new_node;
        } else {
            stack_t *current = stack;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = new_node;
        }
    } else {
        new_node->next = stack;
        stack = new_node;
    }
}

/* Function to pop an element from the stack */
void pop() {
    if (stack == NULL) {
        fprintf(stderr, "Error: can't pop an empty stack\n");
        exit(EXIT_FAILURE);
    }

    stack_t *temp = stack;
    stack = stack->next;
    free(temp);
}

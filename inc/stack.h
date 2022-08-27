#ifndef STACK_H
#define STACK_H

typedef struct Stack *stack_t; // Incomplete Type

int pop(stack_t);
static void isEmpty(stack_t);
static void isFull(stack_t);
void display_stack(stack_t);
void push(stack_t, int);

#endif

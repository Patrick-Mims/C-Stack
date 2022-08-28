#ifndef STACK_H
#define STACK_H

typedef struct Stack *stack_t; // Incomplete Type

stack_t new_stack();
int pop(stack_t);
int isEmpty(stack_t);
int isFull(stack_t);
void display_stack(stack_t);
void push(stack_t, int);
void peek();

#endif

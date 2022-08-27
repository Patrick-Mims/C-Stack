#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

struct Stack
{
  int *data; // Dynamic Array
  int ptr;
  int size;
};

stack_t new_stack(int size)
{
  stack_t stack;

  if((stack = malloc(sizeof(stack_t))) == NULL) exit(EXIT_FAILURE);

  if((stack->data = malloc(size * sizeof(int))) == NULL)
  {
    free(stack); // Free stack before exit
    exit(EXIT_FAILURE);
  }

  stack->ptr = 0;
  stack->size = size;

  printf("Stack Created\n");

  return stack;
}

int isEmpty(stack_t stack)
{
  return stack->ptr == 0;
}

int isFull(stack_t stack)
{
  return stack->ptr == stack->size;
}

void push(stack_t stack, int item)
{
  if(isFull(stack))
  {
    printf("Stack is full");
    exit(EXIT_FAILURE);
  }

  stack->data[stack->ptr] = item;
  stack->ptr++;

  printf("Push Successful ->[ %d ]\n", item);
}

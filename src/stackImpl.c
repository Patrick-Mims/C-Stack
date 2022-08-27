#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

struct Stack
{
  int *data; // Dynamic Array
  int ptr;
  int size;
};

static void isEmpty(stack_t stack)
{
  return stack->ptr == 0;
}

static void isFull(stack_t stack)
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
}

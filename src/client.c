#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define INDEX 20

int main(void)
{
  printf("Simple Stack");

  stack_t stack = new_stack(INDEX);

  push(stack, 50);

  return 0;
}

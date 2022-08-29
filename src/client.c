#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

#define INDEX 20

int main(void)
{
  stack_t stack = new_stack(INDEX);

  push(stack, 50);
  peek();

  push(stack, 100);
  peek();

  printf("Testing...");

  return 0;
}

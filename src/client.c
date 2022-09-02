#include <stdio.h>
#include <stdlib.h>

#include "io.h"
#include "stack.h"

#define INDEX 20

int main(void)
{
  stack_t stack = new_stack(INDEX);

  push(stack, 100);
  peek();

  push(stack, 200);
  peek();

  push(stack, 300);
  peek();

  printf("Testing...\n");

  pop(stack);
  peek();

  push(stack, 9000);

  read_data();


  /*comment for testing*/

  return 0;
}

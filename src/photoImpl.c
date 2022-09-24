#include <stdio.h>
#include <stdlib.h>

#include "stack.h"
#include "photo_stack.h"

struct Photo
{
  char *data; // array pointer
  int ptr;
  int size;
};

photo_t NewStackPhoto(int size)
{
  photo_t stack;

  if((stack = malloc(sizeof(photo_t))) == NULL) exit(EXIT_FAILURE);

  if((stack->data = malloc(size * sizeof(int))) == NULL)
  {
    free(stack);
    exit(EXIT_FAILURE);
  }

  stack->ptr = 0; // point to the first element at the top of the stack
  stack->size = size;
}

/*
void LibraryInit()
{
  printf("LibraryInit()\n");

  int i = 5;

  stack_t stack = new_stack(i);

  do {
    push(stack, i);
    peek();
    i = i - 1;
  } while(i > 0);
}
*/

static int IsFull(photo_t photo)
{
  return photo->ptr == photo->size;
}

static void PhotoPush(photo_t photo, const int item)
{
  if(isFull(photo))
  {
    printf("Stack Full!");
    exit(EXIT_FAILURE);
  }

  photo->data[photo->ptr] = item;
  photo->ptr++;
}

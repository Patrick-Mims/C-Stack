#include <stdio.h>
#include <stdlib.h>

#include "io.h"
#include "stack.h"

#define INDEX 100

void read_data()
{
  stack_t stack = new_stack(5);

  const int size = 100;
  FILE *fp = NULL;
  char line[INDEX] = {0};

  if((fp = fopen("names.txt", "r")) == NULL) 
  {
    printf("File doesn't exist\n");
    exit(EXIT_FAILURE);
  }

  while(fgets(line, size, fp))
  {
    printf("%s\n", line);
  }

  fclose(fp);
}

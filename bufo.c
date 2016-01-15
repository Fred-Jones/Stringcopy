#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MULTIPLIER 1

int main(int argc, char *argv[])
{
  if(argc < 2)
  {
    printf("\nTwo args needed\n");
  }
  char buffer[10];
  strcpy(buffer, argv[1]);
  printf("\n");
  printf("%s", buffer);
  printf("\n");

  return 0;
}

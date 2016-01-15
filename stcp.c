#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char *string;
  string = (char *)malloc(80);
  if(string == NULL)
  {
   printf("log: error\n");
  }
  strcpy(string, "OK");
  printf("%s\n",string);
}

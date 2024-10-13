#include <stdio.h>
#include <stdlib.h>

int main()
{

  int a, b;

  printf("type a positive value: ");

  scanf("%d", &b);

  for (a = 0; a < b; a++)
  {

    printf("I do this b %d times\n", b);
  }

  // puts("I am a c programmer");

  return 0;
  
}

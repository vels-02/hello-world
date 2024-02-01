#include <stdio.h>

int readanumber()
{
  printf("Enter a number 1 -10 : ");
  int x;
  scanf("%d", &x);
  return x;
}

int main(void)
{
  printf("Hello World!\n");
  printf("User entered : %d \n", readanumber());
}

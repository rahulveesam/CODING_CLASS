#include <stdio.h>

int main(void) 
{
  int x,y,sum;

  printf("Enter value of x");
  scanf("%d", &x);

  printf("Enter value of y");
  scanf("%d", &y);

  sum=x+y;
  printf("x+y=%d", sum);
}
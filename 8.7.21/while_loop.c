#include <stdio.h>
int main(void) {
  int num1, num2, sum, count;
  count=0;

  printf("enter number:\n");
  scanf("%d %d", &num1, &num2);

  while(count<5)
  {
   sum=num1+num2;
   printf("%d+%d=%d\n", num1, num2, sum);
   count++;
  }
  return 0;
}
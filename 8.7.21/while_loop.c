#include <stdio.h>
int main(void) {
  int num1, num2, sum, count;
  count=0;

  while(count<5)
  {
    printf("count=%d\n", count);
    printf("enter number:\n");
    scanf("%d %d", &num1, &num2);

   sum=num1+num2;
   printf("%d+%d=%d\n", num1, num2, sum);
   count+=1;

   printf("times count executed : %d\n-----------\n", count);

  }
  return 0;
}
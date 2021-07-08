#include <stdio.h>
int main(void)
{
  int num;
  printf("Enter a number or zero to end :");
  scanf("%d", &num);
  while(num!=0)
  {
    printf("you enetred %d\n", num);
    printf("Enter a number or zero to end :");
    scanf("%d", &num);
  }

  printf("end of program\n");

  return 0;
}
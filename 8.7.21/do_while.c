#include <stdio.h>
int main(void){
  int count=0;

  do{
    printf("%d ", ++count);
  }while(count<10);
  printf("\nEnd Program\n");

  return 0;


}
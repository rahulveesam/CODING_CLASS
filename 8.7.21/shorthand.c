#include <stdio.h>
int main(void){
  int n;
  n=1;

  printf("PRE-INCREMENT\n---------\n");
  printf("n=%d\n", n);
  ++n;
  printf("n=%d\n", n);
  printf("n=%d\n", ++n);


  n=1;
  printf("POST-INCREMENT\n---------\n");
  printf("n=%d\n", n);
  n++;
  printf("n=%d\n", n++);
  printf("n=%d\n", n++);
  printf("n=%d\n", n);





  return 0;

}
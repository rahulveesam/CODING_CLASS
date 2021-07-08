#include <stdio.h>

int main(void) 
{
  short int short_int1 = 32767, short_int2 = 33767;
  int int1 = 2147483647, int2 = 2247483647;
  long int longint1 = 9223372036854775807, longint2 = 9923372036854775807;
  float float1 = 123.4567891, float2 = 123.4567891345;
  double double1 = 12.123456789123456, double2 = 12.123456789123456789;
  long double longdouble1 = 12.123456789123456789, longdouble2 = 12.123456789123456789123;

  printf("short int: %d\t%d\n", short_int1, short_int2);

  printf("int: %d\t%d\n,", int1, int2);

  printf("long int: %ld\t%d\n", longint1, longint2);
  printf("float: %f\t%f\n", float1, float2);
  printf("double: %lf\t%lf\n", double1, double2);
  printf("long double: %lf\t%lf\n", longdouble1, longdouble2);
  return 0;
}

#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 0.00;
  float e = 3.02;
  float* ptrtod = &d;
  float* ptrtoe = &e;
  printf("%f has addr: %d\n", d, &d);
  printf("%f has addr: %d\n", e, &e);
  *ptrtod = 0.284;
  *ptrtoe = 6.206;
  printf("new d = %f\n", d);
  printf("new e = %f\n", e);
}

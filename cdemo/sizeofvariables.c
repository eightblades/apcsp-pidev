#include<stdio.h>

int main()
{
  int a = 5742;
  float b = 394.9;
  char c = 'p';
  double d = 184.72748;
  unsigned int e = 5742;
  short int f = 5742;
  // print value and size of an int variable
  printf("int: %d and size: %d bytes\n", a, sizeof(a));
  printf("float: %f and size: %d bytes\n", b, sizeof(b));
  printf("char: %c and size: %d bytes\n", c, sizeof(c));
  printf("double: %f and size: %d bytes\n", d, sizeof(d));
  printf("unsigned int: %d and size: %d bytes\n", e, sizeof(e));
  printf("short int: %d and size: %d bytes\n", f, sizeof(f));
}


#include <stdio.h>

int main()
{
float areaOfCircle(int r)
{
  float a = 3.14*r*r;
  printf("%f\n",a);
  return a;
}
for(int i = 3.5; i < 13.5; i++)
{
  areaOfCircle(i);
}
}

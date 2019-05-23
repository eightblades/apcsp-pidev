#include <stdio.h>

int main()
{
  int a = 50;
  for (int i = 1; i < 101; i++)
  {
  float b = a%i;
    if (b==0)
    {
      printf("%d\n",i);
    }
  }
}

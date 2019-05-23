#include <stdio.h>

int main()
{
  int a = 6;
  for (int i = 1; i < 101; i++)
  {
  float b = i%a;
    if (b==0)
    {
      printf("%d\n",i);
    }
  }
}

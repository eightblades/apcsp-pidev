#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
    
  if (a != b)
  {
    printf("a is not equal to b\n");
  }
  else
  {
    printf("a is equal to b\n");
  }
    
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is less than or equal to b\n");
  }
    
  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is less than b\n");
  }
    
  if (a == 0 && b == 0)
  {
    printf("Both a and b are equal to 0\n");
  }
  else
  {
    printf("Either a or b or both a and b are no equal to 0\n");
  }
    
if (a == 0 || b == 0)
  {
    printf("Either a or b or both a and b are equal to 0\n");
  }
  else
  {
    printf("Neither a nor b are equal to 0\n");
  }
    
}

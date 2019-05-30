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

	float d = 0.003; 
  float* ptrtod = &d;
	float e = 5.293; 
  float* ptrtoe = &e;
	printf("The value of d is %f\n", d);
	printf("The address of d is %d\n", &d);
	printf("The value of e is %f\n", e);
        printf("The address of e is %d\n", &e);
	float tmp = e;
	e = d;
	d = tmp;
	printf("New d: %f\n",d);
	printf("New e: %f\n",e);
}

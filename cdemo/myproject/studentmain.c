#include <stdio.h>
#include <string.h>
#include "student.h"
#include "student.c"

int main(){
  char input[256];
  struct Student Stdnt[256];
  char ans;
  int c = 0;
  int num = 1;

  char fname[256];
	char lname[256];
	int age;
	int id;

  while (c == 0){
    printf("View or Enter? ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "enter") == 0 || strcmp(&ans, "Enter") == 0){

	    printf("Enter first name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", fname);

	    printf("Enter last name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", lname);

	    printf("Enter age: ");
      while (1){
	      fgets(input, 256, stdin);
	      if (sscanf(input, "%d", &age) == 1) break;
        printf("Invalid Input\n");
      }
	    printf("Enter student ID ");
      while (1){
	      fgets(input, 256, stdin);
 	      if (sscanf(input, "%d", &id) == 1) break;
        printf("Invalid Input\n");
      }

	    strcpy(Stdnt[num].fname, fname);
	    strcpy(Stdnt[num].lname, lname);
	    Stdnt[num].age = age;
	    Stdnt[num].id = id;
	    num++;
    } else if(strcmp(&ans, "view") == 0 || strcmp(&ans, "View") == 0){
	    c = 1;
    } else{
      printf("Invalid Input\n");
    }
  }
  int n;
  int b = 0;
  while (c == 1){
	    printf("View - Student Number: ");
	    while (1){
	      fgets(input, 256, stdin);
 	      if (sscanf(input, "%d", &n) == 1) break;
        printf("Invalid Input\n");
      }
      printStudent(Stdnt[num]);
  }
}

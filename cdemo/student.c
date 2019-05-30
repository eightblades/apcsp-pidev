#include <stdio.h>
#include <string.h>

struct Student{
  char fname[256];
  char lname[256];
  int age;
   int id;
};

void printStudent(struct Student* student)
{
  printf("Name: %s %s\n", student->fname, student->lname);
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n", student->id);
}

int main()
{
  char input[256];
  struct Student Stdnt[256];
  char ans;
  int c = 0;
  int num = 1;

  while (c == 0){
    printf("Enter Student(Y/N)? ");
    fgets(input, 256, stdin);
    sscanf(input, "%s", &ans);
    if (strcmp(&ans, "y") == 0 || strcmp(&ans, "Y") == 0){
	    char fname[256];
	    char lname[256];
	     int age;
	     int id;
	    printf("Enter first name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", fname);
	    printf("Enter last name: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", lname);
	    printf("Enter age: ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%d", age);
	    printf("Enter student ID ");
	    fgets(input, 256, stdin);
 	    sscanf(input, "%d", id);
	    strcpy(Stdnt[num].fname, fname);
	    strcpy(Stdnt[num].lname, lname);
	    Stdnt[num].age = age;
	    Stdnt[num].id = id;
	    num++;
    } else{
	    c = 1;
    }
  }
  int view;
	    printf("View - Student Number:  ");
	    fgets(input, 256, stdin);
	    sscanf(input, "%d", view);
	    printStudent(&Stdnt[view]);
}

#include <stdio.h>
#include <string.h>
#include "student.h"

void printStudent(struct Student* student){
  printf("First Name: %s\n", student->fname);
  printf("Last Name: %s\n", student->lname);
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n", student->id);
}

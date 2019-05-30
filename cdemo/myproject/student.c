#include <stdio.h>
#include <string.h>
#include "student.h"

void printStudent(struct Student* student){
  printf("Name: %s %s\n", student->fname, student->lname);
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n", student->id);
}

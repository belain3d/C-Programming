#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 30;
    double GPA = 3.7;
    char grade = 'A';
    int * pAge = &age;
    double * pGPA = &GPA;
    char * pGrade = &grade;

    printf("Age's memory address: %p\n", &age);
}
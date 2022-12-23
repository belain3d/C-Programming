#include <stdio.h>
#include <stdlib.h>

struct Student {
    char* name;
    char* major;
    int age;
    double gpa;
};

int main() {

    struct Student student1;
    student1.name = "Viktor";
    student1.major = "Computer Science";
    student1.age = 15;
    student1.gpa = 3.7;

    printf("%s", student1.name);

}
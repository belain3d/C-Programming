#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[20];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your name is %s and your age is %d.\n", name, age);
}
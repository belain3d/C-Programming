#include <stdio.h>
#include <stdlib.h>

int salary(int hours, int pay) {
    int result = pay*(12*hours);
    return result;
}

int main() {

    char name[25];
    int hours;
    int payPerHour;
    char currency[5];

    printf("Welcome to belain3d's salaryCalculator program!\n\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Input monthly work hours: ");
    scanf("%d", &hours);

    printf("Type in the currency: ");
    scanf("%s", currency);

    printf("Input employee's pay per hour: ");
    scanf("%d", &payPerHour);

    printf("%s's salary is %d %s.", name, salary(hours, payPerHour), currency);

}
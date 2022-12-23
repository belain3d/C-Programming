#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double add(double num1, double num2) {

    double result = num1+num2;
    return result;
}

double subtract(double num1, double num2) {
    double result = num1-num2;
    return result;
}

double multiplication(double num1, double num2) {
    double result = num1*num2;
    return result;
}

double division(double num1, double num2) {
    double result = num1/num2;
    return result;
}

double square(double num1) {
    double result = num1*num1;
    return result;
}

double cube(double num1) {
    double result = num1*num1*num1;
    return result;
}

int main(){

    double number1;
    double number2;
    char operation[4];

    printf("Enter your first number: ");
    scanf("%lf", &number1);
    printf("Enter operation (default=+): ");
    scanf("%s", operation);
    printf("Enter your second number: ");
    scanf("%lf", &number2);

    if (strcmp(operation, "+") == 0) {
        printf("%lf" , add(number1, number2));
    }
    else if (strcmp(operation, "-") == 0) {
        printf("%lf", subtract(number1, number2));
    }
    else if (strcmp(operation, "*") == 0) {
        printf("%lf", multiplication(number1, number2));
    }
    else if (strcmp(operation, "/") == 0) {
        printf("%lf", division(number1, number2));
    }
    else if (strcmp(operation, "**") == 0) {
        printf("%lf", square(number1));
    }
    else if (strcmp(operation, "***") == 0) {
        printf("%lf", cube(number1));
    }
    else {
        printf("%lf", add(number1, number2));
    }

}
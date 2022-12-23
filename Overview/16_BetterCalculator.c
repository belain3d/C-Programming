#include <stdio.h>
#include <stdlib.h>

double add(double first, double second) {
    return first+second;
}

double subtract(double first, double second) {
    return first-second;
}

double multiplication(double first, double second) {
    return first*second;
}

double division(double first, double second) {
    return first/second;
}

int main() {

    char operation;
    double firstNumber;
    double secondNumber;

    printf("Welcome to BetterCalculator!\n");
    

    printf("Enter first number: ");
    scanf("%lf", &firstNumber);

    printf("Please choose operation: ");
    scanf("%s", &operation);

    printf("Enter second number: ");
    scanf("%lf", &secondNumber);

    if (operation == '+') {
        printf("%f", add(firstNumber, secondNumber));
    }

    else if (operation == '-') {
        printf("%f", subtract(firstNumber, secondNumber));
    }

    else if (operation == '*') {
        printf("%f", multiplication(firstNumber, secondNumber));
    }

    else if (operation == '/') {
        printf("%f", division(firstNumber, secondNumber));
    }

}
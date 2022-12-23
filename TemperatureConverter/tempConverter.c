#include <stdio.h>
#include <stdlib.h>

double celsiusToFahrenheit (double celsius) {
    double fahrenheit = 32;
    double result = fahrenheit + (celsius * 1.8);
    return result;
}

double fahrenheitToCelsius (double fahrenheit) {
    double celsius = 0;
    double result = (fahrenheit-32)*5/9;
    return result;
}

int main() {
    double celsius;
    double fahrenheit;
    double variable;
    int choice;

    printf("Welcome to belain3d's tempConverter program!\n\n");
    
    printf("Please select from the below: \n1: Celsius to Fahrenheit\n2: Fahrenheit to Celsius\n: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        printf("Enter the amount of degree Celsius to be converted: ");
        scanf("%lf", &celsius);
        printf("%lf", celsiusToFahrenheit(celsius));

        case 2:
        printf("Enter the amount of Fahrenheit to be converted: ");
        scanf("%lf", &fahrenheit);
        printf("%lf", fahrenheitToCelsius(fahrenheit));

        default:
        printf("Enter the amount of degree Celsius to be converted: ");
        scanf("%lf", &celsius);
        printf("%lf", celsiusToFahrenheit(celsius));
        
    }
}
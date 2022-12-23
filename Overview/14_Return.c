#include <stdio.h>
#include <stdlib.h>

double square(double number) {
    return number*number;
}

int main() {
    printf("%f", square(5));
}
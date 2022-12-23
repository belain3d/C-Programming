#include <stdio.h>
#include <stdlib.h>

void sayHi(char* user) {
    printf("Hiya, %s\n", user);
}

void square(double parameter) {
    printf("%f\n", parameter*parameter);
}

int main() {
    sayHi("Béla");
    square(5);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int number1 = (rand() % 20) + 1;
    printf("%d", number1);

}
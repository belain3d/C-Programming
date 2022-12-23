#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNumber = 5;
    int guess;
    int guessCount = 0;

    while(guess != secretNumber) {
        if (guessCount == 3) {
            printf("Terminal locked...\n");
            break;
        }
        printf("Enter a number: ");
        scanf("%d", &guess);

        guessCount++;
    }

    if (guess == secretNumber) {
        printf("You guessed it! Yay!\n");
    }

}
#include <stdio.h>
#include <stdlib.h>

int main() {

    char noun[20];
    char adjective[20];
    char verb[20];

    printf("Noun: ");
    scanf("%s", noun);

    printf("Adjective: ");
    scanf("%s", adjective);

    printf("Verb: ");
    scanf("%s", verb);

    printf("\n%s are red\n", noun);
    printf("Violets are %s\n", adjective);
    printf("I %s you.\n", verb);
}
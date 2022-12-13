#include <stdio.h>
#include <stdlib.h>

int main() {

    char characterName[] = "George";
    int characterAge = 70;

    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old\n", characterAge);
    
    characterAge = 69;
    
    printf("He really liked the name %s\n", characterName);
    printf("But disliked being %d.\n", characterAge);
}
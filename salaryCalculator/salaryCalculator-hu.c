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

    printf("Üdvözöllek belain3d salaryCalculator programjában!\n\n");

    printf("Add meg a nevet: ");
    scanf("%s", name);

    printf("Add meg a havi óraszámot: ");
    scanf("%d", &hours);

    printf("Add meg a pénznemet: ");
    scanf("%s", currency);

    printf("Add meg az óránkénti fizetést: ");
    scanf("%d", &payPerHour);

    printf("%s fizetése %d %s.", name, salary(hours, payPerHour), currency);

}
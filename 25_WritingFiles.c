#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * fpointer = fopen("employees.txt", "w"); 

    // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
        fprintf(fpointer, "\nKelly, Customer Service"); // If using "a" instead of "w", it will append this line

    fclose(fpointer);
    return 0;

}
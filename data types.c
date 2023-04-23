#include <stdio.h>

int main() {
    int n1 = 5;             // Integer (whole number)
    float n2 = 5.99;   // Floating point number
    char n3 = 'D';       // Character
    double n4= 3.12345; // Double
    char txt[10]= "This is text"; // array

    //printing
    printf("Number: %d\n", n1);
    printf("Number: %i\n", n1);
    printf("Number: %f\n", n2);
    printf("Number: %2f\n", n4);
    printf("Number: %c\n", n3);

    printf("Array: %c\n", txt[1]);

    //printf("Number: %c\n", txt);

    // printf("Number: %c\n", n1);
    // printf("Number: %c\n", n2);
    // printf("Number: %c\n", n3);
    // printf("Number: %c\n", n4);


    return 0;
}
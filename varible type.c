#include <stdio.h>

int main() {

    // Create variables
    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    
    // integer
    
    printf("%d\n", myNum);
    printf("%i\n", myNum);

    
    double myDoubleNum = 19.99;  // Double (floating point number)
    
    printf("%lf", myDoubleNum);

     //Float

    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits

    
    char greetings[] = "Hello World!"; //string 
    printf("\n%s", greetings);
    
    return 0;
}
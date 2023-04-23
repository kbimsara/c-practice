#include <stdio.h>

enum obj{
    low=25,
    medium=50,
    high=75
};

int main() {
    
    enum obj subject=medium;
    printf("\nEnums output is %d\n",subject);
    
    return 0;
}
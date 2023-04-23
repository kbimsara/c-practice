#include <stdio.h>

struct obj{
    int number;
    char chr;
    char txt[20];
    int n[];
};

int main() {
    
    struct obj ob1;

    ob1.number=9;
    ob1.chr='A';
    strcpy(ob1.txt,"This is text");
    ob1.n={1,2,3,4,5,6,7,8,9,0};

    printf("\nThis is my object number : %d",ob1.number);
    printf("\nThis is my object Text : %c",ob1.chr);
    printf("\nThis is my object MSG : %s",ob1.txt);

    return 0;
}
#include <stdio.h>

int main() {

    int a=0;
    int b=0;
    while(a<=5){
        printf("%d no\n", a);
        a++;
    }
    
    printf("\n");
            
    do{
        printf("%d no\n", b);
        b++;
    }
    while(b<=5);
    
    return 0;
}
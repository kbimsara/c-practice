#include <stdio.h>

int main() {

    int a=2;
    int b=1;

    if(a<b){
        printf("Big number Is :%d", b);
    }else if(a>b){
        printf("Big number Is :%d", a);
    }else{
        printf("%d and %d numbers are equel.", a, b);
    }

    printf("\n");

    (a<b)?printf("Big number Is :%d", b):(a>b)?printf("Big number Is :%d", a):printf("%d and %d numbers are equel.", a, b);

  return 0;
}
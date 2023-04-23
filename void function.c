#include <stdio.h>

void check(int i){
    int number=i%2;
    if(number==0){
        printf("\n%d is Even Number.",i);
    }else{
        printf("\n%d is Odd Number.",i);
    }
}

int main() {
    int n;

    printf("Enter Number :");
    scanf("%d",&n);
    printf("\nRow Count: %d.\n",n);
    //printf("\n%d -> %d",i,nn);
    for(int i=1;i<=n;i++){
        check(i);
    }
    
    return 0;
}
#include <stdio.h>

int main() {

    int num[6]={1,2,3,4,5,6};

    printf("%d\n",*num);
    printf("%p\n",&num);

    for(int i=0;i<6;i++){
        printf("%d\n",*(num+i));
    }

    
    return 0;
}
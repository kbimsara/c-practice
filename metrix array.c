#include <stdio.h>

int main() {

    int num[2][10]={{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20}};

    for(int a=0;a<2;a++){
        printf("\n----------%d-----------\n",a);
        for(int b=0;b<10;b++){
            printf("[%d][%d]->%d \n",a,b,num[a][b]);
        }
    }
    printf("\n----------------------------\n",a);

    char txt[5][2]={{a,b,c,d,e},{f,g,h,i,j}}

    // int n=sizeof(num[][]);
    // printf("Count %d",n);
    return 0;
}
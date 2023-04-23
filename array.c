#include <stdio.h>

int main() {

    int numbers[]={10,20,30,40,50,60,70,80,90,100};
    int i=sizeof(numbers)/4;
    int l=sizeof(numbers);
    printf("\n--------int array------------\n");
    printf("Array lenth is %d\n",l);
    printf("Array size is %d\n",i);
    for(int a=0;a<i;a++){
        printf("%d ",numbers[a]);
    }
    printf("\n--------char array------------\n");

    char word[]="This is simple msg";
    int wl=sizeof(word)-1;
    printf("word Array lenth is %d\n",wl);
    for(int b=0;b<wl;b++){
        printf("%c",word[b]);
    }
    //printf("Array size is %d",i);
    printf("\n------------------------------\n");
    
    return 0;
}
#include <stdio.h>

int main() {
    int num;
    char txt[12];

    printf("Enter Number:");
    scanf("%d",&num);
    printf("Enter Text:");
    scanf("%s",&txt);
    printf("User Entered Number :%d\n",num);
    printf("User Entered Text :%s",txt);
    
    return 0;
}
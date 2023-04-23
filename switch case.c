#include <stdio.h>

int main() {

    int day=4;

    switch (day){
        case 1:
            printf("%d is Monday.", day);
            break;
        case 2:
            printf("%d is Tursday.", day);
            break;
        case 3:
            printf("%d is Wednseday.", day);
            break;
        case 4:
            printf("%d is Thursday.", day);
            break;
        case 5:
            printf("%d is Friday.", day);
            break;
        case 6:
            printf("%d is Saturday.", day);
            break;
        case 7:
            printf("%d is Sunday.", day);
            break;
    }
    
    return 0;
}
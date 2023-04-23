#include <stdio.h>

int main() {

    int n=12;
    int* n_ptr=&n;
    printf("%d\n",n);
    printf("%p\n",&n_ptr);

    printf("%d\n",*n_ptr);
    printf("%p\n",&n_ptr);
    
    return 0;
}
#include <stdio.h>

int main() {

    char txt[]="This is sample msg";
    printf("gg-> %s\n",txt);
    
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%lu\n", sizeof(greetings));   // Outputs 13
    printf("%lu\n", sizeof(greetings2));  // Outputs 13

    printf("\n--------------------------\n");
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));
    printf("\n--------------------------\n");
    
    char str1[20] = "Hello ";
    char str2[] = "World!";
    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);
    // Print str1
    printf("%s", str1);
    printf("\n--------------------------\n");
    
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi"; 
    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2));
    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3));

    return 0;
}
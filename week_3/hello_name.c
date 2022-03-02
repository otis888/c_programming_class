#include <stdio.h>

int main(void) {

    printf("What is your name? ");
    char name[20];
    scanf("%s", name);
    
    printf("Hello, %s!\n", name);

    return 0;
}

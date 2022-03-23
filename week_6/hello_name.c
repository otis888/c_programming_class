#include <stdio.h>

void printHello(char name[])
{
    printf("Hello, %s!\n", name);
}
int main(void)
{
    printHello("Galaa");

    printf("What is your name? ");
    char name[20];
    scanf("%s", name);
    printHello(name);

    return 0;
}

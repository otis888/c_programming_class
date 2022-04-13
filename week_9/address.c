#include <stdio.h>

void swap(int *a, int *b)
{
    int box = *a;
    *a = *b;
    *b = box;
}
int main()
{
    int a = 3;
    int b = 5;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

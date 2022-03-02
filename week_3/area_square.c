#include <stdio.h>
int main(void)
{
    printf("What is the length? ");
    double length;
    scanf("%lf", &length);
    double area = length * length;
    printf("The area is %lf.\n", area);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("What is radius? ");
    double radius;
    scanf("%lf", &radius);
    double area = radius * radius * M_PI;
    printf("The area is %lf.\n", area);
    return 0;
}

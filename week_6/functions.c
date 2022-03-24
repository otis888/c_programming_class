#include <stdio.h>
#include <math.h>

double areaCircle(double radius)
{
    return radius * radius * M_PI;
}
int main(void)
{
    double area = areaCircle(2);
    printf("%lf\n", area);

    return 0;
}

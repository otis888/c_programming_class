#include <stdio.h>

double areaSquare(double width, double height) // or int 
{
    return width * height;
}
int main(void)
{
    double area = areaSquare(2.7, 3.4);
    printf("%lf\n", area);
    area = areaSquare(5, 6.3);
    printf("%lf\n", area);

    return 0;
}
/* #include <stdio.h>
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
} */

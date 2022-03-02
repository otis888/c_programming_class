#include <stdio.h>
int main(void){
    printf("What is width? ");
    double width;
    scanf("%lf", &width);

    printf("What is length? ");
    double length;
    scanf("%lf", &length);

    printf("What is height? ");
    double height;
    scanf("%lf", &height);

    double volume_box = width * length * height;
    printf("The volume box is %lf.\n", volume_box);

    return 0;
}

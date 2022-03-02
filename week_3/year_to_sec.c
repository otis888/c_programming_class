#include <stdio.h>
int main(void)
{

    int year = 1;
    const int SEC_IN_MIN = 60;
    const int MIN_IN_HOUR = 60;
    const int HOUR_IN_DAY = 24;
    const int DAY_IN_YEAR = 365;

    int seconds = year * SEC_IN_MIN * MIN_IN_HOUR * HOUR_IN_DAY * DAY_IN_YEAR;

    printf("%d seconds\n", seconds);

    return 0;
}

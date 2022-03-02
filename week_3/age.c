#include <stdio.h>
int main(void)
{

    int year = 1;
    const int SEC_IN_MIN = 60;
    const int MIN_IN_HOUR = 60;
    const int HOUR_IN_DAY = 24;
    const int DAY_IN_YEAR = 365;

    /*int myYears = 21;
    int myDays = 226;
    int myHours = 9;
    int myMinutes = 27;

    int myYearSec = myYears * SEC_IN_MIN * MIN_IN_HOUR * HOUR_IN_DAY * DAY_IN_YEAR;
    int myDaysSec = myDays * HOUR_IN_DAY * MIN_IN_HOUR * SEC_IN_MIN;
    int myHoursSec = myHours * MIN_IN_HOUR * SEC_IN_MIN;
    int myMinutesSec = myMinutes * SEC_IN_MIN;

    int seconds = myYearSec + myDays + myHoursSec + myMinutesSec;*/

    const int SEC_IN_YEAR = 31536000;
    const int SEC_IN_DAY = 86400;
    const int SEC_IN_HOUR = 3600;

    int myYearSeconds = 21 * SEC_IN_YEAR;
    int myDaySeconds = 226 * SEC_IN_DAY;
    int myHourSeconds = 9 * SEC_IN_HOUR;
    int myMinSeconds = 28 * SEC_IN_MIN;

    int myTotalAge = myYearSeconds + myDaySeconds + myHourSeconds + myMinSeconds;


    printf("%d seconds\n", myTotalAge);

    return 0;
}

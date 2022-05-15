#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 100; i = i + 1)
    {
        int tegsh = i % 2 == 0;

        if (tegsh)
        {
            printf("%d tegsh\n", i);
        }
        else
        {
            printf("%d sondgoi\n", i);
        }
    }
    return 0;
}

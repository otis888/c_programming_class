#include <stdio.h>

void isSorted(int array[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        int first = array[i];
        int second = array[i + 1];
        if (first > second)
        {
            printf("not sorted");
            return;
        }
    }
    printf("sorted");
}
int main(void)
{
    int array[] = {1, 2, 5, 7, 7};
    isSorted(array, 5);
    return 0;
}

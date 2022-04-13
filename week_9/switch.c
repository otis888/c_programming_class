#include <stdio.h>

int main(void)
{
    char letter = 'a';
    switch (letter)
    {
    case 'a':
        printf("apple\n");
        break;
    case 'b':
        printf("banana\n");
        break;
    case 'c':
        printf("cat\n");
        break;
    default:
        printf("other\n");
        break;
    }

    return 0;
}

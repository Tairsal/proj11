#include <stdio.h>
#include "NumClass.h"

int main()
{
    int x, y, max, min;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        max = x;
        min = y;
    }
    else
        max = y, min = x;

    for (int i = min; i <= max; ++i)
    {
        if (isPrime(i))
        {
            printf("%d ,", i);
        }
    }
    printf("\n");
    for (int i = min; i <= max; ++i)
    {
        if (isStrong(i))
        {
            printf("%d ,", i);
        }
    }
    printf("\n");

    for (int i = min; i <= max; ++i)
    {
        if (isPalindrome(i))
        {
            printf("%d ,", i);
        }
    }
    printf("\n");

    for (int i = min; i <= max; ++i)
    {
        if (isArmstrong(i))
        {
            printf("%d ,", i);
        }
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main(void)
{
    long long t, x, y;
    scanf("%lld", &t);

    for (long long i = 0; i < t; i++)
    {
        scanf("%lld %lld", &x, &y);

        long long central;

        if (x > y)
        {
            central = 1 + x * (x - 1);
            if (x % 2 == 0)
            {
                printf("%lld\n", central + (x - y));
            }
            else
            {
                printf("%lld\n", central - (x - y));
            }
        }
        else if (x < y)
        {
            central = 1 + y * (y - 1);
            if (y % 2 == 0)
            {
                printf("%lld\n", central - (y - x));
            }
            else
            {
                printf("%lld\n", central + (y - x));
            }
        }
        else
        {
            central = 1 + y * (y - 1);
            printf("%lld\n", central);
        }
    }
}
#include <stdio.h>

int main(void)
{
    long long n, r;
    scanf("%lld", &n);
    long long somaReal = 0;

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%lld", &r);
        somaReal += r;
    }

    long long soma = n * (n + 1) / 2;

    printf("%lld", soma - somaReal);

    return 0;
}
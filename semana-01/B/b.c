#include <stdio.h>

int main(void)
{
    long long n, soma = 0;
    scanf("%lld", &n);

    long long vet[n];

    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &vet[i]);
    }

    for (long long i = 0; i < n - 1; i++)
    {
        if (vet[i] > vet[i + 1])
        {
            soma += vet[i] - vet[i + 1];
            vet[i + 1] = vet[i];
        }
    }

    printf("%lld", soma);
}
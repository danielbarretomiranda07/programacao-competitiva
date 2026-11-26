#include <stdio.h>
#include <stdlib.h>  

long long vet[200000];

int cmp(const void *a, const void *b)
{
    long long x = *(const long long *)a;
    long long y = *(const long long *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%lld", &vet[i]);

    qsort(vet, n, sizeof(long long), cmp);

    long long mediana = vet[n / 2];
    long long custo = 0;

    for (int i = 0; i < n; i++)
        custo += llabs(vet[i] - mediana);

    printf("%lld\n", custo);

    return 0;
}
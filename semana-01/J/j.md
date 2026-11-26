# Missing Number

## Problema
There are n sticks with some lengths. Your task is to modify the sticks so that each stick has the same length.

You can either lengthen and shorten each stick. Both operations cost x where x is the difference between the new and original length.

What is the minimum total cost?

### Input

The first input line contains an integer n: the number of sticks.

Then there are n integers: p1,p2,…,pn: the lengths of the sticks.

## Pensamento

A Fazer    

## Resolução

```c
#include <stdio.h>
#include <stdlib.h>   // qsort e llabs

long long vet[200000];   // global: fora do stack

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
```

```python
# A fazer
```
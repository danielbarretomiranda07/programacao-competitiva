# Missing Number

## Problema
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

## Pensamento

Queremos achar o número que falta na sequência de 1 a n.
Basta usar a fórmula matemática da soma de 1 a n:
```math
\sum_{i=1}^{n} i = \frac{n(n+1)}{2}
```

e ver a diferença da soma real que aconteceu com os valor lidos.

## Resolução

```c
#include <stdio.h>

int main(void)
{
    long long n, r; 
    scanf("%lld", &n);
    long long somaReal = 0;

    for (int i = 0; i < n-1; i++)
    {
        scanf("%lld", &r);
        somaReal += r;
    }

    long long soma = n * (n+1)/2;

    printf("%lld", soma - somaReal);    

    return 0;
}
```
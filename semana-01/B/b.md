# Missing Number

## Problema
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

### Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

## Pensamento

Percorrer o vetor e caso o elemento (i + 1) não foi maior ou igual que o elemento i, deixá-lo igual e guardar a diferença entre eles. Assim o vetor sempre será crescente.

## Resolução

```c
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
```
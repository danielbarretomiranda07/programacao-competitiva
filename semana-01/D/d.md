# Missing Number

## Problema
Your task is to construct an $n×n$ grid where each square has the smallest nonnegative integer that does not appear to the left on the same row or above on the same column.

### Input

The only line has an integer n.

## Pensamento

Passar por todo elemento da matriz. Unir os elementos que ja apareceram na linha até aquele e na coluna até aquele. Iniciar o possível valor em 0 (menor possível) e ir incrementando 1 até chegar em um valor que não apareceu.    

## Resolução

```python
n = int(input())

vet = [[0] * n for _ in range(n)]

for i in range(n):
    for j in range(n):
        usado = set(vet[i][:j]) | {vet[k][j] for k in range(i)}
        val = 0
        while val in usado:
            val += 1
        vet[i][j] = val
                        
for i in range(n):
    for j in range(n):
        print(vet[i][j], end=" ")
    print()
```
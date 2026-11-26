n = int(input())

vet = [[0] * n for _ in range(n)]

for i in range(n):
    for j in range(n):
        usado = set(vet[i][:j]) |
{vet[k][j] for k in range(i)
}
        val = 0
        while val in usado:
            val += 1
        vet[i][j] = val
                        
for i in range(n):
    for j in range(n):
        print(vet[i][j], end=" ")
    print()
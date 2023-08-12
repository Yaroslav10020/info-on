n = int(input())
gv = [int(i) for i in input().split()]
gv.sort()
d = [0] * n
d[1] = gv[1] - gv[0]
if n > 2:
    d[2] = gv[2] - gv[0]
    for i in range(3, n):
        d[i] = min(d[i - 2], d[i - 1]) + gv[i] - gv[i - 1]
print(d[n - 1])

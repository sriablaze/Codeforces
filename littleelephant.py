import sys
n, m = raw_input().split(' ')
n = int(n)
m = int(m)
a = []
line = raw_input()
a = line.split(' ')
x = 0
k = -1
b.sort()

# for j in range (0, m):
lj, rj = raw_input().split(' ')
lj = int(lj)
rj = int(rj)
for i in range(lj, rj) :
    if a.count(a[i]) == int(a[i]) and a[i] != k :
        x = x + 1
        k = a[i];
print x
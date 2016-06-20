import sys
y ,k, n = raw_input().split(' ')
y = int(y)
k = int(k)
n = int(n)
for i in range(y + 1, n + 1) :
    if i + y % k == 0:
        print i
        
def get_closest_multiple_of_k_to_n(n, k):
    multiple1 = 0
    multiple2 = 0
    i = n + 1 
    j = n - 1
    while(1):
        if i % k != 0:
            i = i + 1
        else:
            multiple1 = i
        if j % k != 0:
            j = j - 1
        else:
            multiple2 = j
        if multiple1 != 0 and multiple2 != 0:
            break

    if multiple1 < multiple2:
        return multiple1
    else:
        return multiple2    

n, k = raw_input().split(' ')
n = int(n)
k = int(k)
sol = get_closest_multiple_of_k_to_n(n, k)         
print sol                  
"""
Input = 3 17 4

Output = 13
"""
k, n, w = raw_input().split(' ')
k = int(k)
n = int(n)
w = int(w)
calculated_sum = (w * (w + 1) / 2) * k)
if calculated_sum < n:
	amount_the_soldier_has_to_borrow = 0
else:
	amount_the_soldier_has_to_borrow = calculated_sum - n
print amount_the_soldier_has_to_borrow

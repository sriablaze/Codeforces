a = [60, 48, 1, 5, 7, 8, 9, 20, 100, 160, 51, 170, 200, 52, 49]
interim = 100000000000
close_index = 0
for index, value in enumerate(a):
    value  = 50 - value
    value = abs(value)
    if value < interim:
        interim = value 
        close_index = index
print close_index
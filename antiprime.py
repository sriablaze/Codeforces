q = input() # No of queries
a = [] # I should have named this list as queryset but the problem specifies that the default name has to be used'''
for i in range(0, q):
    number = input()
    a.append(number)
divisor_count_dict = {1 : 1, 'max_antiprime' : 1}
antiprime_list = []
results = []
def find_divisor_count(number):
    divisor_count = 0
    for k in range(1, number + 1):
        if (number % k) == 0:
            divisor_count = divisor_count + 1
    return divisor_count


def update_dict(number, current_query):
    global antiprime_list, divisor_count_dict, last_antiprime
    while(1):
        divisor_count = find_divisor_count(number)
        divisor_count_dict[number] = divisor_count
        if divisor_count > divisor_count_dict[divisor_count_dict['max_antiprime']]:
            divisor_count_dict['max_antiprime'] = number
            antiprime_list.append(number)
        last_antiprime = antiprime_list[len(antiprime_list) - 1]
        if last_antiprime >= current_query:
            break;
        number = number + 1
                
for index, i in enumerate(a):
    if index == 0:
        number = 2
        update_dict(number, i)
        results.append(last_antiprime)
        continue
       
    elif i > last_antiprime:
        number = last_antiprime + 1
        update_dict(number, i)
        results.append(last_antiprime)
    elif i < last_antiprime:
        key = i
        for m in range(key, last_antiprime + 1):
            for j in antiprime_list:
                if m == j:
                    results.append(j)
                    break
            if m == j: 
                break
for i in results:
    print i

    










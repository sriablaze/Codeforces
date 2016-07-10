"""
Sample input output :

I have my input and best friend of each element as a key/value pair in my dictionary
i initialize an array(output_list) with the values of the dictionary
If the days_of_exchange is 1 
I just print the array
Otherwise, On each day I modify each element of the output_list with the friend
using the dictionary(friends_list_dict)
Sample input/output
2 4 1 3
Output if days_of_exchange : 3 4 1 2 
"""
import operator
number_of_pupils = input("Enter the number of pupils")
days_of_exchange = input("Enter the number of days during which the exchange would take place")
friends_list_dict = {} 
output_list = []
for i in range(1, number_of_pupils + 1):
    number = input()
    friends_list_dict[number] = i
friends_list_dict = dict(sorted(friends_list_dict.items(), key = operator.itemgetter(0)))
print friends_list_dict
for i in range(1, number_of_pupils + 1):
   output_list.append(friends_list_dict[i])
if days_of_exchange == 1:
    print output_list
else:
    for i in range(2, days_of_exchange + 1):
        k = 0
        for j in range(1, number_of_pupils + 1):
            output_list[k] = friends_list_dict[output_list[k]]
            k = k + 1
    print output_list


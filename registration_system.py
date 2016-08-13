"""
Time Efficiency = n^2

"""
def check_for_user(request):
    global system_database
    if request in system_database:
        result = augment_username(request)
        return result
    else:
        system_database.append(request)
        return "OK"


def augment_username(request):
    result = '' 
    global system_database
    request_length = len(request)
    temp_storage_of_patterns = []
    for i in system_database:
        if request == i[ : request_length]:
            temp_storage_of_patterns.append(i)
    if len(temp_storage_of_patterns) == 1:
        result = temp_storage_of_patterns[0] + '1'
        system_database.append(result)
        return result
    else:
        maximum = 0
        base_request_string = i[ : request_length]
        for i in temp_storage_of_patterns[1 :]:
            augmented_number = int(i[request_length :])
            if augmented_number > maximum:
                maximum = augmented_number 
        added_number = maximum + 1
        result= base_request_string + str(added_number)
        return result


system_database = []
no_of_requests = raw_input("Enter the number of requests to the system")
no_of_requests = int(no_of_requests)
for i in range(0, no_of_requests):
    request = raw_input("Enter the request{0}".format(i))
    result = check_for_user(request)
    print result
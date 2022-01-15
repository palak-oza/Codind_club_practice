def count_substring(string, sub_string):
    count=0
    for i in range(len(string)-len(sub_string)+1):
        if (string[i:i+len(sub_string)] == sub_string):
            count += 1
    
    return count

if __name__ == '__main__':
    string = input("Enter the string")
    sub_string = input("Enter the sub-string") 
    
    count = count_substring(string, sub_string)
    print("The sub string ",sub_string," is repeated ",count," times in ",string)

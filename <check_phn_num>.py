n=int(input())
list1=[]
for i in range(n):
    a=input()
    list1.append(a)

for i in range(n):
    if(len(list1[i])==10 and list1[i].isnumeric()==True):
        if(list1[i][0]=='9' or list1[i][0]=='7' or list1[i][0]=='8'):
            print("Yes")
        else:
            print("No")
    else:
        print("No")

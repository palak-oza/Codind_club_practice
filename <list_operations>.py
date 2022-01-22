n=int(input())
l1=[]
l2=[]
l3=[]
for i in range(n):
    a=input()
    l1.append(a.split())

for i in range(n):
    if(l1[i][0]=="append"):
        l2.append(l1[i][1])
    elif(l1[i][0]=="insert"):
        pos=int(l1[i][1])
        l2.insert(pos,l1[i][2])
    elif(l1[i][0]=="remove"):
        temp=int(l1[i][1])
        l2.remove(temp)
    elif(l1[i][0]=="sort"):
        l2=sorted(l2)
    elif(l1[i][0]=="reverse"):
        l2.reverse()
    elif(l1[i][0]=="pop"):
        l2.pop()
    elif(l1[i][0]=="print"):
        for i in range(len(l2)):
            l2[i]=int(l2[i])
        print(l2)

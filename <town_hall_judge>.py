while True:
    n=int(input("Enter N "))
    trust1=[]
    trust2=[]
    temp=[]
    sublist=[item for item in input("Enter trust details: ").split()]

    for i in sublist:
        temp.append(i.split(","))
    print(temp)
    for i in temp:
        trust1.append(i[0])
        trust2.append(i[1])

    set1=set(trust1)
    set2=set(trust2)

    if(set2.issubset(set1)==True):
        print("-1")
    else:
        set3=set2.difference(set1)
        print(set3)
    ch=input("Do you want to continue(y/n): ")
    if(ch!='y' and ch!='Y'):
        print("Exitting")
        break

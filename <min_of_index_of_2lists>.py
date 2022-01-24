while True:
    a=int(input("Enter number of names in list 1: "))
    b=int(input("Enter number of names in list 2: "))
    l1=[]
    l2=[]
    sum=0
    temp=[]
    print("FOR LIST 1")
    for i in range(a):
        c=input("Enter name of the hotel: ")
        l1.append(c)

    print("FOR LIST 2")
    for j in range(b):
        d=input("Enter name of the hotel: ")
        l2.append(d)
    dict={}
    for k in range(a):
        for l in range(b):
            if(l1[k]==l2[l]):
                sum=k+l
                dict[l1[k]]=sum
    print(dict)
    flipped = {}
  
    for key, value in dict.items():
        if value not in flipped:
            flipped[value] = [key]
        else:
            flipped[value].append(key)

    sorted_dict=sorted(flipped)

    print("The common on both lists is: ",flipped.key(0))

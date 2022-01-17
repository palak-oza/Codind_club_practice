LA4-Assignment 1(ss)

def add(set1):
    lst1=list(set1)
    c=(input("Enter element to update: "))
    boole=elepresent(c,set1)
    if(boole==True):
            print("element already present")
    else:
        set1.add(c)
        print("updated set is: ",set(set1))
    return set(set1)
    

def delete(set1):
     c=(input("Enter element to delete: "))
     boole=elepresent(c,set1)
     if(boole==True):
         set1.discard(c)
         print("Updated set is: ",set(set1))
     else:
         print("Element already deleted or not present in set")
     return set(set1)

def size(set1):
    print("Size of the given set is: ",len(set1))

def elepresent(c,set1):
    lst1=list(set1)
    for i in range(len(set1)):
        if(c==lst1[i]):
            return True

def muladd(set1):
    c=list([item for item in input("Enter elements to be added: ").split()])
    tempset=set(c)
    boole=subset(tempset,set1)
    if(boole==True):
        print("No changes to set as all elements are already present")
    else:
        set1.update(c)
        print("updated set is: ",set1)
    return set(set1)


def intersect(set1,set2):
    set3=set1.intersection(set2)
    print("intersection of 2 sets is: ",set(set3))


def union(set1,set2):
    set3=set1.union(set2)
    print("Union of given sets is: ",set(set3))
   

def diff(set1,set2):
    set3=set1.difference(set2)
    print("Difference of given sets is: ",set(set3))

def subset(s1,set1):
    if(s1.issubset(set1)):
      return True
    else:
      return False

      
def main():
    setf={}
    setf=set()
    n=int(input("Enter number of elements in set : "))
    temp1=[]
    for i in range(n):
        a=input("Enter element: ")
        temp1.append(a)
    set1=set(temp1)
    while True:
        print("\n1.Add elements to set")
        print("2.Add multiple elements to set")
        print("3.Delete element from set")
        print("4.check size of set")
        print("5.Check element presence")
        print("6.Operations for 2 sets")
        print("7.Exit")
        ch1=int(input("Enter choice: "))
        if(ch1==1):
            setf=add(set1)
        elif(ch1==2):
            setf=muladd(setf)
        elif(ch1==3):
            setf=delete(setf)
        elif(ch1==4):
            size(setf)
        elif(ch1==5):
            c=input("Enter element to be checked if present in set: ")
            boole=elepresent(c,setf)
            if(boole==True):
                print("Element is present in set ")
            else:
                print("element not in set\n")
        elif(ch1==6):
                m=int(input("Enter number of elements in set2:"))
                temp2=[]
                for i in range(m):
                    b=input("Enter element: ")
                    temp2.append(b)
                    set2=set(temp2)
                while True:
                    print("SETS FOR OPERATION OF 2 SET")
                    if(setf=={}):
                        print(set1)
                    else:
                        print (setf)
                    print(set2)
                    print("\n1.Intersection of 2 sets")
                    print("2.Union of 2 sets")
                    print("3.subset check")
                    print("4.Difference of 2 sets")
                    print("5.Exit")
                    ch2=int(input("Enter choice: "))
                    if(ch2==1):
                        intersect(setf,set2)
                    elif(ch2==2):
                        union(setf,set2)
                    elif(ch2==3):
                        boole=subset(set2,setf)
                        if(boole==True):
                            print("given set is subset of above set ")
                        else:
                            print("Given set is not subset of above set ")
                    elif(ch2==4):
                        diff(setf,set2)

                    elif(ch2==5):
                        print("Exitting oprations of 2 sets!\n")
                        break
                    else:
                        print("wrong option!")

                 
        elif(ch1==7):
            print("Exitting!!")
            exit(0)
            #break
        else:
            print("Wrong option,Program auto terminating!")

if __name__=="__main__":
    main()


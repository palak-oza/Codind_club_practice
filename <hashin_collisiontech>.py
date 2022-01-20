import array as arr
max=15
def linprob(a):
     lst1=[int(item) for item in input("Enter digits to add in hash table(less than 15): ").split()]
     for i in range(len(lst1)):
         loc=lst1[i]%max
         flag=0
         count=0
         while(flag==0 and count<max):
             if(a[loc]==-1):
                 a[loc]=lst1[i]
                 flag==1
                 count=count+1
                 break
             else:
                 loc=(loc+1)%max
     return a

def lpsearch(a):
    element=int(input("Enter element to be searched: "))
    loc=element%max
    flag=0
    count=0
    while(flag==0 and count<max):
        if(a[loc]==element):
            flag=1
            break
        else:
            count=count+1
            loc=(loc+1)%max
    return flag
    


def quadprob(a):
     lst1=[int(item) for item in input("Enter digits to add in hash table(less than 15): ").split()]
     for i in range(len(lst1)):
         loc=lst1[i]%max
         flag=0
         count=0
         step=0
         while(flag==0 and count<max):
             loc_n=(loc+(step*step))%max
             if(a[loc_n]==-1):
                 a[loc_n]=lst1[i]
                 flag==1
                 count=count+1
                 break
             else:
                step=(step+1)
     return a

def qpsearch(a):
    element=int(input("Enter element to be searched : "))
    loc=element%max
    flag=0
    count=0
    step=0
    while(flag==0 and count<max):
        loc_n=(loc+(step*step))%max
        if(a[loc_n]==element):
            flag=1
            break
        else:
            count=count+1
            step=(step+1)
    return flag


    
def prints(a):
   print("Array is: ")
   for i in range(max):
       print(" ",a[i],"\n")

def main():
     a=arr.array('i',[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1])
     b=arr.array('i',[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1])
     while True:
         print("\nMenu for hash table\n")
         print("1.linear probing ")
         print("2.quadratic probing ")
         print("3.linear probing array search ")
         print("4.quadratic probing array search ")
         print("5.exit \n")
         ch=int(input("Enter choice : "))
         if(ch==1):
            array1=linprob(a)
            prints(array1)
         elif(ch==2):
            array2=quadprob(b)
            prints(array2)
         elif(ch==3):
            temp1=lpsearch(array1)
            if(temp1==1):
                print("element found ")
            else:
                print("element not found ")
         elif(ch==4):
             temp2=qpsearch(array2)
             if(temp2==1):
                print("element found ")
             else:
                print("element not found ")
         elif(ch==5):
            print("exitting")
            exit(0)
         else:
            print("Wrong choice!!")

if __name__=="__main__":
     main()



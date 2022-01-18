La1: tele phn
import array as arr
max=15
def linprob(a):
     lst1=[double(item) for item in input("Enter digits to add in hash table(less than 15): ").split()]
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
def prints(a):
   print("Array is: ")
   for i in range(max):
       print(" ",a[i],"\n")

def main():
     a=arr.array('i',[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1])
     b=arr.array('i',[-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1])
     while True:
         print("Menu for hash table")
         print("1.linear probing ")
         print("2.quadratic probing ")
         print("3.exit ")
         ch=int(input("Enter choice : "))
         if(ch==1):
            array=linprob(a)
            prints(array)
         elif(ch==2):
            array=quadprob(b)
            prints(array)
         elif(ch==3):
            print("exitting")
            exit(0)
         else:
            print("Wrong choice!!")

if __name__=="__main__":
     main()



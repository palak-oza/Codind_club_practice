
def bubsort(arr,n):
        for i in range (n-1):
            
            for j in range(n-i-1):
                temp=0
                flag=0
                if(arr[j]>arr[j+1]):
                    temp=arr[j]
                    arr[j]=arr[j+1]
                    arr[j+1]=temp
        print(arr)
                    
def selsort(arr,n):
        for i in range(n):
            mini=i
            for j in range(i+1,n):
                if arr[mini] > arr[j]:
                    mini=j
            arr[i],arr[mini]=arr[mini],arr[i]
        
        return arr

def maxi(arr,n):
    print("top 5 values of array is: ",arr[-5:])

def main():
        n=int(input("Enter number of element: "))
        arr=[]
        for i in range(n):
            a=int(input("Enter the element: "))
            arr.append(a)
        while True:
            print("1=bubble sort\n","2=selection sort\n","3=maximum marks\n","4=exit\n")
            a=int(input("Choose from option: "))
            if (a==1):
                bubsort(arr,n)
            elif(a==2):
                arr=selsort(arr,n)
                print(arr)
            elif(a==3):
                arr=selsort(arr,n)
                maxi(arr,n)
            else:
                print("program terminated!!")
                break
    
if __name__ == "__main__" :
        main()  



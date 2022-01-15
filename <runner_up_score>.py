# 2-runner-up-score
n = int(input("Enter number of scores: "))
print("Enter scores with spaces in between: ")
arr = map(int, input().split())
l1=list(arr)
l1.sort(reverse=True)
a=max(l1)
for i in range(n):
    if(a in l1):
       l1.remove(max(l1))
    else:
       break
print(max(l1))
   

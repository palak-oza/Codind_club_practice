def minion_game(string):
    l1=[]
    l2=[]
    str1=""
    str2=""
    count1=0
    count2=0
    for i in range(len(string)):
        temp1=""
        temp2=""
        if(string[i]=='A' or string[i]=='E' or string[i]=='I' or string[i]=='O' or string[i]=='U'):
            for j in range(i,(len(string))):
                temp1+=string[j]
                count1+=1
            for j in range(i,(len(string))):
                temp2+=string[j]
                count2+=1
                
         
    if(count1>count2):
        print("Kevin ",count1)
    else:
        print("Stuart ",count2)
        
if __name__ == '__main__':
    s = input()
    minion_game(s)

def rem(arr,n):
    temp = []
    for x in arr:
        if x not in temp:
            temp.append(x)
    arr.clear()
    arr = arr.extend(temp[:])
    return(len(temp))
 

    
n = int(input())
arr = list(map(int,input().strip().split()))
n = rem(arr,n)
for i in range(n):
    print(arr[i])
    
    

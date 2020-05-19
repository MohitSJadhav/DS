
n = int(input("Enter Number of elements to be sorted: "))

a = list(map(int, input().split(" ")))

for i in range(0, n-1):
	for j in range(0,n-1-i):
		if a[j]>a[j+1]:
			temp = a[j]
			a[j] = a[j+1]
			a[j+1] = temp
			
print(a)

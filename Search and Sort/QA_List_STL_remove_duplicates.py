import math
ll = list(map(int,input("Enter array in sorted order: ").split(" ")))
key = int(input("Enter number to find: "))
def binary_search(ll, l, r, key):
	mid =  math.floor((l+r)/2)
	if l<=r:
		if ll[mid] == key:
			return mid 
		elif ll[mid] < key:
			return binary_search(ll,mid+1,r,key)
		else:
			return binary_search(ll,l,mid-1,key)
	else:
		return(-1)
	

print(len(ll))	  
result = binary_search(ll,0,len(ll)-1,key)
if(result == -1):
	print("element not found")
else:
	print("element found at position: ",result+1)

#include<stdio.h>

void display(int arr[],int n){
	for(int i = 0;i<n;i++){
		printf("Element at index %d : %d\n",i+1,arr[i]);
	}
}

int prefix_sum(int arr[], int n){
	int k=0, sum =0, max=0;
	int prefix[10];
	sum = arr[0];
	for(int i=1 ; i<n ; i++){
		sum = sum + arr[i];
		arr[i] = sum;
	}
	display(arr, n);
}

int sum(int n){
	int i=0,m=0, a, b, sum;
	int ar[n];
	for(i=0 ; i<n ; i++ ){
		ar[i] = 0;
	}
	printf("Enter value of m: ");
	scanf("%d",&m);
	for(i=0 ; i<m ; i++){
		printf("Enter value of a and b: ");
		scanf("%d%d",&a,&b);
		for(int j=a ; j<=b ; j++ ){
			ar[j] = ar[j] + 100;
		}
	}
	sum = 0;
	for(i=1 ; i<n ; i++){
		if(ar[i]>sum){
			sum = ar[i];
		}
	}
	printf("Max: %d\n",sum);
	//display(ar, n);
	
}
int main(){
	int choice;
	int arr[10],n;
	do{
		printf("\n\nEnter operation to be performed:\n1.Accept array elements.\n2.Calculate prefix sum\n3. Sum\n");
		scanf("%d",&choice);
		switch(choice){
			case 1: {	printf("Enter the number of elements to accept(**Less than 10): ");
						scanf("%d",&n);
						for(int i = 0;i<n;i++){
							printf("Enter element %d: ",i+1);
							scanf("%d",&arr[i]);
						}
					}
			break;
			
			case 2: prefix_sum(arr,n);
			break;
			
			case 3: sum(n);
			break;
			
		}
	}while(choice<=2);
	return 0;
}

#include<stdio.h>

void display(int arr[],int n){
	for(int i = 0;i<n;i++){
		printf("Element at index %d : %d\n",i+1,arr[i]);
	}
}

int max_sum(int arr[], int n){
	int k=0, sum =0, max=0;
	printf("Enter number of element sum to find: ");
	scanf("%d",&k);
	if(k>n){
		printf("Invalid number!\n");
		return(1);
	}
	for(int i=0 ; i<k ; i++){
		sum = sum + arr[i];
	}
	max=sum;
	for(int i=1 ; i<(n-k+1) ; i++){
		sum = sum + arr[i+k-1] - arr[i-1];
		if(sum>=max){
			max = sum;
		}
	}
	printf("Maximum sum = %d",max);
}

int main(){
	int choice;
	int arr[10],n;
	do{
		printf("\n\nEnter operation to be performed:\n1.Accept array elements.\n2.Calculate sum\n");
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
			
			case 2: max_sum(arr,n);
			break;
			
		}
	}while(choice<=2);
	return 0;
}

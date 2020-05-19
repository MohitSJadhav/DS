#include<stdio.h>
#include<stdlib.h>
#define SIZE 100


int rev_temp(int arr[],int n){
	int a[SIZE];
	for(int i=0; i<n ; i++){
		a[i] = arr[i];
	}
	int j=(n-1);
	for(int i=0 ; i<n ; i++){
		arr[i] = a[j];
		j--;
	}
	printf("\n# Reversed Array: \n");
	for(int i=0 ; i<n ; i++){
		printf("Element %d: %d\n",i+1,arr[i]);
	}
	
}

int rev_smart(int arr[], int n){
	int t = n/2, end=(n-1), temp;
	/*while(start >= end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		end--,start++;
	}*/
	for(int start=0 ; start < end ; start++){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		end--;
	}
	printf("\n# Reversed Array:\n");
	for(int i=0 ; i<n ; i++){
		printf("Element %d: %d\n",i+1,arr[i]);
	}
}

int main(){
	
	int choice = 0,arr[SIZE],n;
	printf("Enter number of elements to input: ");
	scanf("%d",&n);
	for(int i=0 ; i<n ; i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nEntered elements are: \n");
	for(int i=0 ; i<n ; i++){
		printf("Element %d: %d\n",i+1,arr[i]);
	}


	do{
		printf("\n# Enter operation to be performed: \n1.Reverse using temporary array.\n2.Reverse smartly.\n3.Exit\n");
		scanf("%d",&choice);
		switch(choice){
			
			case 1: rev_temp(arr,n);
			break;
			
			case 2: rev_smart(arr,n);
			break;
			
			case 3: exit(1);
			
			default : printf("Invalid Choice\n");
		}
	}while(choice>0 && choice<3);
	return 0;
}  

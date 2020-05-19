#include<stdio.h>

void display(int arr[],int n){
	for(int i = 0;i<n;i++){
		printf("Element at index %d : %d\n",i+1,arr[i]);
	}
}

void rotate_by_one(int arr[], int n){
	for(int i=0; i<n-1 ; i++){
		arr[i] = arr[i+1];
	}
}

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
} 

int main(){
	int choice;
	int arr[10],n;
	do{
		printf("\n\nEnter operation to be performed:\n1.Accept array elements.\n2.Display elements.\n3.Rotate for normal method.\n4.Rotate by next method");
		scanf("%d",&choice);
		switch(choice){
			
			case 1: {
						printf("Enter the number of elements to accept(**Less than 10): ");
						scanf("%d",&n);
						for(int i = 0;i<n;i++){
							printf("Enter element %d: ",i+1);
							scanf("%d",&arr[i]);
						}
					}
			break;
			
			case 2: display(arr,n);
			break;
			
			case 3: {
						int d=0,temp;
						printf("Enter number of rotations to be performed: ");
						scanf("%d",&d);
						for(int i=0; i<d ; i++ ){
							temp = arr[0];
							rotate_by_one(arr,n);
							arr[n-1] = temp;	
						}
					}
			break;
			
			case 4:{	int d=0,temp,k,j;
								printf("Enter number of rotations to be performed: ");
								scanf("%d",&d);
								int result = gcd(n,d);
								printf("result: %d",result);
								
								for(int i=0 ; i < d ; i++){
									temp = arr[i];
									j = i;
k = 0;
									while(k < (n/result)-1){
										arr[j] = arr[j+result];
										j = j + result;
										k++;
									}
									arr[j+result] = temp;
									
								}
								display(arr,n);
					
				   }
			break;
		}
	}while(choice<=4);
	return 0;
}

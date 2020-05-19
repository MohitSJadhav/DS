#include<stdio.h>

int find(int arr[],int key,int n)
{
	int length = sizeof(arr[10])*n/sizeof(int);
	
	//printf("Length: %d",n);
	
	if(length>1){
		for(int i=0;i<length;i++){
			if(arr[i]==key){
				return(i+1);
			}	
		}
	}
	return 0;		
}

int main(){
	int arr[10],n;
	printf("Enter number of elements to be entered: ");
	scanf("%d",&n);
	for(int i = 0; i<n ;i++){
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	 
	/*for(int i = 0; i<n ;i++){
		printf("%d\t",arr[i]);
	}*/
	int option = 0;
	do{
		
		printf("Enter operation to be performed:\n1.Insert element\n2.Delete element\n3.Find element\n");
		scanf("%d",&option);	
		switch(option){
			case 1: if(n < 10){
						int op;
						printf("\nEnter insertion to be performed:\n1.Insert new element at end\n2.Insert at any index\n");
						scanf("%d",&op);
						int num,element;
						printf("Enter element to insert: ");
						scanf("%d",&element);
						if(op == 1)
						{ 
								arr[n] = element;
								printf("Element inserted successfully!\n");
								n = n+1;
								for(int i = 0; i<n ;i++){
									printf("%d\t",arr[i]);
								}
						}
						
						else if(op == 2){
						
								printf("Enter index to perform insertion at: ");
								scanf("%d",&num);
								if(num <= n+1)
								{
									for(int i = n-1;i>=num-1;i--){
										arr[i+1] = arr[i];
									}
									arr[num-1] = element;
									n = n+1;
									for(int i = 0; i<n ;i++){
										printf("%d\t",arr[i]);
									}
								}
								else
								{
									printf("Insertion not possible!");
								}
						}
						else{
							printf("Incorrect option\n");
						}
					}
					else{
						printf("Cannot insert\n");
					}
			break;
			case 2: {int key=0;
					printf("\nEnter element to delete: ");
					scanf("%d",&key);
					int result = find(arr,key,n);
					if(result==0){
						printf("Element not present in the array!\n");
					}
					else
					{
								for(int i = result; i<n-1 ; i++){
									arr[i]=arr[i+1];								
								}
								n = n-1;
								printf("Element deleted Successfully!\n");
					}
					}
			break;
			case 3: {int key=0;
					printf("\nEnter element to find: ");
					scanf("%d",&key);
					int result = find(arr,key,n);
					if(result==0){
						printf("Not found\n");
					}
					else
					{
						printf("Element first found at index: %d\n",result);		
					}
					}
			break;	
			}
		}while(option <= 3);
}


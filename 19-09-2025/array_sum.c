#include<stdio.h>

//Arrray size(50)
//Get the value "n" = 10
//get 10 numbers from user and store it in the array
//Add 10 numbers in the array
//print the result


int main(){
	int arr[50], limit, i, sum = 0;

	printf("Enter the Number of Elements to Add: ");
	scanf("%d",&limit);
	
	if (limit > 50){
		printf("Invalid Input!!!\n");
	} else {

		
		for(i = 0; i < limit; i++){
			printf("Enter the Element of the index[%d]: ", i);
			scanf("%d",&arr[i]);
		}
		
		for(i = 0; i < limit; i++){
			sum += arr[i];
		}
		
		printf("Sum of array Elements: %d\n",sum);
	
	}
	
	return (0);
}

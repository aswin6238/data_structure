#include<stdio.h>

int main(){
	
	int num, largest = 0, i = 0;

	while ( i < 5 ){
	
		printf("Enter a Number: ");
		scanf("%d",&num);
		
		if ( num > largest ){
			largest = num;
		}
	
	i++;	

	}
	
	printf("Largest: %d\n", largest);

	return (0);
}

#include<stdio.h>

int main(){
	int num1;
	int *ptr;
	num1 = 10;
	printf("value of num1 is %d\n",num1);
	ptr = &num1;
	printf("Adress of num1 is %p\n", ptr);
	printf("Adress of num1 is %p\n", &num1);
	*ptr = 30;
	printf("value of num1 is %d\n", num1);
	printf("value of num is %d\n", *ptr);

	return (0);
}

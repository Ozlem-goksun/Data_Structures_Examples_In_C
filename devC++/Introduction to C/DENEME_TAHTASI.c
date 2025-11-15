#include<stdio.h>

int main()
{
	int age = 50;
	int *pAge = &age;
	
	
	printf("value of age: %d\n", age);
	printf("address of age: %p\n", &age);
	
	printf("value of pAge : %p\n", pAge);
	printf("value at stored address: %d", *pAge);
}
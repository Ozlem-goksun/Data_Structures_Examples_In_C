// Write a program to find wheter a number ;s even or odd.

#include <stdio.h>

int main()
{
	int num;
	
	printf("\n Enter a number : ");
	scanf("%d", &num);
	
	if(num % 2 == 0)
	{
		printf("\n The number you have entered is even.");
	}
	else
	{
		printf("\n The number you have entered is odd.");
	}
}


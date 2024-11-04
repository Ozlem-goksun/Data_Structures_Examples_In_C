//Write a program to find whether a number is even or odd using functions.

#include <stdio.h>

//int evenOrOdd(int);

int main()
{
	int num, flag;
	
	printf("Enter any number : ");
	scanf("%d", &num);
	
	flag = evenOrOdd(num);
	
	if(flag == 1)
	{
		printf("\n %d is even.", num);
	}
	else
	{
		printf("\n %d is odd.", num);
	}
}

int evenOrOdd(int a)
{
	if( a % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

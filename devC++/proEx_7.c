//Write a program to determine Whether a given numbers is a prime or a composite number.

#include <stdio.h>

int main()
{
	int flag = 0, i, num;
	
	printf("\n Enter any number : ");
	scanf("%d", &num);
	
	for(i = 2; i < num/2; i++)
	{
		if(num % 2 == 0)
		{
			flag = 1;
			break;
		}
	}
	
	if(flag == 1)
	{
		printf("\n %d is a composite number.", num);
	}	
	else
	{
		printf("\n %d is a prime number.", num);
	}
	
	return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
}
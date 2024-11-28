// Write a program to enter "n" number of digits.Form a number using these digits.

#include <stdio.h>
#include <math.h>

int main()
{
	int num = 0, digit[10], num_of_digits, i;
	
	printf("\n Enter the number of digits : ");
	scanf("\n %d", &num_of_digits);
	
	for (i = 0; i < num_of_digits; i++)
	{
		printf("\n Enter the digit at position %d : ", i + 1);
		scanf("%d", &digit[i]);
	}
	
	i = 0;
	
	while (i < num_of_digits)
	{
		num = num + digit[i] * pow(10, i);
		i++;
	}
	
	printf("\n The number is : %d", num);
	
	return 0;	
}

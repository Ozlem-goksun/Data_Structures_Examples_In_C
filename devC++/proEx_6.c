//Write a program to calculate the average of first n numbers.

#include <stdio.h>

int main()
{
	int n, i = 0, sum = 0;
	float avg = 0.0;
	
	printf("Enter the value of the n : ");
	scanf("%d", &n);
	
	do
	{
		sum = sum + i;
		i++;
	}while(i <= n);
	
	avg = (float)sum/n;
	
	printf("\n The sum of first %d numbers = %d", n, sum);
	printf("\n The avarage of first %d numbers = %.2f",n , avg);
	
	return 0;
}

// Write a program to find the mean of "n" numbers using arrays.

#include <stdio.h>

int main()
{
	int i, n, arr[10], sum = 0;
	float mean = 0.0;
	
	printf("\n Enter the number of the elements in the array : ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		printf("\n arr[%d] ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	
	mean = (float) sum / n;
	
	printf("\n The sum of the array elements = %d", sum);
	printf("\n The mean of the array elements = %.1f", mean);
	
	return 0;
	
}

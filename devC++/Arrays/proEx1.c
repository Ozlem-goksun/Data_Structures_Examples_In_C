// Write a program to read and display "n" numbers using an array.

#include <stdio.h>

int main()
{
	int arr[20], i, n;
	
	printf("\n Enter the number of elements in the array : ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		printf("\n arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\n The array elements are ");
	
	for(i = 0; i < n; i++)
	{
		printf("\n%d", arr[i]);
	}
	
}

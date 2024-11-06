//Write a program to find whether  the array of integers contains a dublicate number.

#include <stdio.h>

int main()
{
	int arr[10], i, j, n, flag = 0;
	
	printf("\n Enter the size of the array : ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		printf("\n arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j] && i != j)
			{
				flag = 1;
				printf("\n Dublicate numbers found at locations %d and %d.", i, j);
			}
		}
	}
	
	if ( flag == 0)
	{
		printf("\n No Dublicates Found!!!");
	}
	
	return 0;
}

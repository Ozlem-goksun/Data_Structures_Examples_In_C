#include <stdio.h>

int main()
{
	int i, arr1[3], arr2[3], arrM[6];
	
	printf("ilk dizinin elemanlarını giriniz: \n");
	
	
	for(i = 0; i < 3; i++)
	{
		printf("%d. eleman: ", i+1);
		scanf("%d", &arr1[i]);
		arrM[i] = arr1[i];
	}
	
	printf(" ikinci dizinin elemanlarını giriniz: \n");
	
	for(i = 0; i < 3; i++)
	{
		printf("%d. eleman: ", i + 1);
		scanf("%d", &arr2[i]);
		arrM[i+3] = arr2[i];
	}
	
	printf("iki dizinin birleştirilmiş hali:\n");
	
	for(i = 0; i < 6; i++)
	{
		printf("%d. eleman: %d \n", i + 1, arrM[i]);
	}
	
	
	
}
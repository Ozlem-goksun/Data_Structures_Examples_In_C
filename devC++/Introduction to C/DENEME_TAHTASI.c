#include <stdio.h>

int main()
{
	int i, n, pos;
	
	printf("dizinizin boyutu: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for (i = 0; i < n; i++)
	{
		printf("%d. eleman: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("diziden silinecek elemanin pozisyonu: ");
	scanf("%d", &pos);
	
	for (i = pos; i < n-1 ; i++)
	{
		arr[i] = arr[i + 1];
	}
	
	n = n - 1;
	
	printf("dizinin son hali: \n");
	
	for(i = 0; i < n; i++)
	{
		printf("%d. eleman = %d\n", i + 1, arr[i]);
	}
	
}
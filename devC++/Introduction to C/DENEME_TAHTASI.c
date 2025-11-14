#include <stdio.h>

int main()
{
	int i, n, n1, arr[n], pos;
	
	printf("diziniz kaç elemanli: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		printf("%d. eleman: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("diziye eklenecek yeni eleman: ");
	scanf("%d", &n1);
	printf("eklenecek elemanin pozisyonu: ");
	scanf("%d", &pos);
	
	n = n + 1;
	
	arr[pos] = n1;
	
	for(i = n ; i >= pos; i--)
	{
		arr[i] = arr[i-1];
	}
	
	printf("dizinin son hali: \n");
	
	for(i = 0; i < n; i++)
	{
		printf("arr[%d] = %d \n", i, arr[i]);
	}
}

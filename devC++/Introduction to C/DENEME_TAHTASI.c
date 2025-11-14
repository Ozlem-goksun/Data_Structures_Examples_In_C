#include <stdio.h>

int main()
{
	int i, n, nums[20], sum = 0;
	
	printf("Toplanacak eleman sayisini giriniz : ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d. degerinizi giriniz : ", i + 1);
		scanf("%d", &nums[i]);
		sum += nums[i];
	}
	
	printf("%d", sum);
}

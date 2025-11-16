#include <stdio.h>

int main()
{
	int arr[3] = {1,2,3};
	
	
	
	printf("arrayin adresi: %x \n", arr );
	printf("ilk elemanin adresi : %x\n", &arr[0]);
	printf("ilk elemanin degeri : %x", &arr+1);
	
	
}
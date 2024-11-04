 //Write a program to calculate the sum of numbers from m to n.
 
#include <stdio.h>

int main()
{
 	int i, n, m, sum = 0;
 	
 	printf("Enter the 'm' value : ");
 	scanf("%d", &m);
 	
 	i = m;
 	
 	printf("Enter the 'n' value : ");
 	scanf("%d", &n);
 	
 	while(i <= n)
 	{
	 		sum = sum + i;
	 		i = i + 1;
    }
    
    printf("The sum of numbers from %d to %d equals to %d", m, n, sum);
    
    return 0;
}

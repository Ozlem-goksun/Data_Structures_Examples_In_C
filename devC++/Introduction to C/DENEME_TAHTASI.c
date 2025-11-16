#include <stdio.h>

double getSquare(double *ptr);


int main()
{
	double number, result;
	printf("Enter a number: ");
	scanf("%lf", &number);
	
	result = getSquare(&number);
	printf("Square of number : %.2f",result);
}


double getSquare(double *ptr)
{
	return (*ptr) * (*ptr);
}
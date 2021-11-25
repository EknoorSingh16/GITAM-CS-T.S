#include<stdio.h>

int main()
{
	float c, f;
	
	printf("Enter the temperature in celcius: ");
	scanf("%f",&c);
	
	f = (c*9/5)+32;
	
	printf("The temperature in fahrienhiet is: %.2f",f);
	
	return 0;
}

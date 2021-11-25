#include<stdio.h>

int main()
{
	float sub1, sub2, sub3, sub4, sub5, total, percentage, cgpa;
	
	printf("Enter marks of sub1: ");
	scanf("%f",&sub1);
	
	printf("Enter marks of sub2: ");
	scanf("%f",&sub2);
	
	printf("Enter marks of sub3: ");
	scanf("%f",&sub3);
	
	printf("Enter marks of sub4: ");
	scanf("%f",&sub4);
	
	printf("Enter marks of sub5: ");
	scanf("%f",&sub5);
	
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	percentage = total / 500 * 100;
	cgpa = percentage * 0.9/10;
	
	printf("The total of ur marks i: %.2f",total);
	
	printf("\nThe percentage of ur marks is :%.2f",percentage);
	
	if (cgpa>6)
	printf("\nYour cgpa is: %.2f and you are eligible for placement",cgpa);
	
	if (cgpa<6)
	printf("\nYour cgpa is: %.2f and you are not eligible for placement",cgpa);
	
	return 0; 
}

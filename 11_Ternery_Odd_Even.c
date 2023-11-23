// WAP to find number is even or odd using ternary operator.

#include<stdio.h>
main()
{
	int no;
	
	printf("\n\n\t Input a number : ");
	scanf("%d",&no);
	
	no%2==0?printf("\n\n\t Even Number.."):printf("\n\n\t Odd Number..");
}

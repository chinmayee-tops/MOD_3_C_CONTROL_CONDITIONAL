/*
Check Number Is Positive or Negative.

<0 will be negative.
>0 will be positive.
*/

#include<stdio.h>
main()
{
	int num;
	
	printf("\n\n\t Input any number : ");
	scanf("%d",&num);
	
	if(num>0)
		printf("\n\n\t The entered number is positive...");
		
	else if(num<0)
		printf("\n\n\t The entered number is negative... ");
		
	else
		printf("\n\n\t The entered number is zero... ");		
}

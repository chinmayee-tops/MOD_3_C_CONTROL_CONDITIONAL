/*
WAP to check whether a number is negative, positive or zero
*/

#include<stdio.h>
main()
{
	int m, n;
	
	printf("\n\n\t Input any number : ");
	scanf("%d",&m);
	
	if(m>0)
	{
		n=1;
		printf("\n\n\t Positive Number n=%d",n);
	}
	
	else if(m==0)
	{
		n=0;
		printf("\n\n\t Zero n=%d",n);	
	}
	
	else
	{
		n=-1;
		printf("\n\n\t Negative Number n=%d",n);
	}
		
}

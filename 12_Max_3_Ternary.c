// WAP to find maximum number among 3 numbers using ternary operator.

#include<stdio.h>
main()
{
	int n1, n2, n3, max;
	
	printf("\n\n\t Input number1 : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Input number2 : ");
	scanf("%d",&n2);
	
	printf("\n\n\t Input number3 : ");
	scanf("%d",&n3);
	
	max = (n1>n2) && (n1>n3)? n1 : (n2>n1) && (n2>n3) ? n2 : n3;
	
	printf("\n\n\t Maximum from above 3 number : %d", max);
}

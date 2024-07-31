#include<stdio.h>
main(){
	int n,sum,second_sum,i;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	sum+=i;
	second_sum+=sum;	
	}
	printf(" sum is %d",second_sum);
}


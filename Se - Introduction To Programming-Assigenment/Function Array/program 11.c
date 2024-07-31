#include<stdio.h>
#define MAX 5
main(){
	int a[MAX],i;
	for(i=1;i<=	MAX;i++)
	{
		printf("enter the elements :");
		scanf("%d",&a[i]);
	}
	for(i=MAX;i>=1;i--)
	{
		printf("array  %d ",a[i]);
	}
}



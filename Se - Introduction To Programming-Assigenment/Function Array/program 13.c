#include<stdio.h>
main(){
	int a[5],i;
	for(i=1;i<=5;i++)
	{
		printf("enter elements : \n");
		scanf("%d\n",&a[i]);
		if(a[i]%2==0)
		{
			printf("array number is even \n");
		}
		else {
			printf("array number is not even \n");
		}
		
	}
}


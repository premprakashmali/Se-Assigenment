#include<stdio.h>

main()
{
	int week;
	printf("Enter the number(1-7):");
	scanf("%d",&week);
	switch(week)
	{
	case 1:
		printf("monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
		
		default:{
			printf("Invalid number:");
			break;
		}
		
	}


	
}

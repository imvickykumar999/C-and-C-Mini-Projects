#include<stdio.h>
main()
{
	int i,j,k=1;
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(i<=4)
			{
				if(j<=4-i)
					printf(" * ");
				else
					printf("   ");
			}
			else
			{
				if(j<=k)
					printf(" * ");
					
				else
					printf("   ");
			}	
		}
		if(i>=5)
			{
				k++;
			}
		printf("\n");
	}
	scanf("%c", &i);
}

#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=10;j++)
		{
			if(i<=1)
			{
			   if((j>=2-i&&j<=3+i)||(j>=7-i&&j<=8+i))
			   printf(" * ");
			   else
			   printf("   ");
		    }
		    else
		    {
		    	if(j>=i-2&&j<=12-i)
		    	printf(" * ");
		    	else
		    	printf("   ");
			}
		}
		printf("\n");
	}
}

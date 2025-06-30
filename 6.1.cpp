#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d,%d",&m,&n);
	
	
	
	for(int i=m;i<=n;i++)
	{
		int count=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				count+=j;
			}
			
		}
		if(count==i)
		{
		printf("%d\n",i);
		}
		
		
	
	}
	
	return 0;
 } 

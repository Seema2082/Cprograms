#include<stdio.h>
int main()
{
	int test,m,n,i,diff;
	scanf("%d",&test);
	for(i=0;i<test;i++)
	{
		scanf("%d",&m);
		scanf("%d",&n);
		if(m>n)
		{   
		    diff=m-n;
			
			printf("%d",diff);
		}
		else
		{   
		    diff=n-m;
			printf("bipin");
			printf("%d",diff);
		}
	}
	return 0;
}

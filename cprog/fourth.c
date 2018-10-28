#include<stdio.h>
long long int ar[100001];
int main()
{
	
	int i,j,k,t,sum,flag,ans,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		sum=0;
		flag=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
		scanf("%lld",&ar[j]);
		sum=sum+ar[j];
		}
		ans=sum/n;
		if(sum%n==0)
		{
			for(j=0;j<n;j++)
			{
				if(ar[j]>ans)
				{
					k=ar[j]-ans;
				flag=flag+k;
				}
			}
		printf("%d\n",flag);
		}
		else
		printf("No Treat\n");
		
	}
	return 0;
	} 

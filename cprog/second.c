#include<stdio.h>
int main()
{
	int i,j,k,t,n,a;
	float ar[50000],avg,sum;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d %d",&n,&k);
		for(j=0;j<n;j++)
		{
			scanf("%f",&ar[j]);
		}
		for (i=0;i<n;++i)
    	{
        	for (j=i+1;j<n;++j)
        		{
            	if(ar[i]>ar[j])
            		{
                a=ar[i];
                ar[i]=ar[j];
                ar[j]=a;
            		}
        		}
    	}
    	sum=0;
		for(j=0;j<(n-2*k);j++)
    	{
    		sum=sum+ar[j+k];
		}
		avg=sum/(n-2*k);
    	
	printf("%f\n",avg);
	
	
	}
	return 0;
}

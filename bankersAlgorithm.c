#include<stdio.h>
#include<stdbool.h>
int main()
{
	int n,m;
	printf("Enter the no.of processes\n");
	scanf("%d",&n);
	printf("Enter the no of resources\n");
	scanf("%d",&m);
	int a[n][m],max[n][m],need[n][m],work[m];
	printf("Enter the resources allocated initially\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the maximum resources needed\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&max[i][j]);
		}
	}
	int av[m];
	bool finish[n];
	printf("Enter the no of available resources\n");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&av[i]);
		work[i]=av[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			need[i][j]=max[i][j]-a[i][j];
		}
	}
	int count;
	int k=0;
	while(k<n)
	{
		for(int i=0;i<n;i++)
		{
			count=0;
			for(int j=0;j<m;j++)
			{
				if(need[i][j]<=work[j])
				{
					count++;
				}
			}
			if(count==m && finish[i]!=true)
			{
			
			for(int z=0;z<m;z++)
			{
				work[z]+=a[i][z];
			}
			k++;
			finish[i]=true;
			printf("The no of resources available after process %d - ",i);
			for(int p=0;p<m;p++)
		printf("%d ",work[p]);
		printf("\n");
		}
		}
}
return 0;
}
	
				
					
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

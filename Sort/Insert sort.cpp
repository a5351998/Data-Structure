#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int num[5],i,j,flag,tmp=0,k;
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
		
	}
    for(i=1;i<5;i++)
	{
		j=i;
		while(num[j]<num[j-1])
		{		
			tmp=num[j-1];
			num[j-1]=num[j];
			num[j]=tmp;
			j--;	
			if(j==0)
			   break;
		}
		printf("��%d�� ",i);
		for(k=0;k<5;k++)
		  printf("%d ",num[k]);
		printf("\n");	
	
	}	
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
}



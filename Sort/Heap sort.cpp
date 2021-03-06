#include<stdio.h>
#include<stdlib.h>
void maxheapsort(int num[],int start,int end);
void swap(int *a,int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void heapsort(int num[],int lenght)
{
	int j;
	for(j=lenght/2+1;j>=0;j--)
	{
		maxheapsort(num,j,lenght);
	}
	for(j=lenght-1;j>0;j--)
	{
		swap(&num[0],&num[j]);
		maxheapsort(num,0,j);
	}
}
void maxheapsort(int num[],int start,int end)
{
	int dad = start;
	int son = dad * 2 + 1;
	while(son < end)
	{
		if(son+1 < end && num[son]<num[son+1])
		{
			son++;		
		}
		if(num[dad]>num[son])
		{
			return;
		}
		else
		{
			swap(&num[dad],&num[son]);
		    dad = son;
		    son = dad *2 + 1;
		}
	}
}
int main()
{
  int num[8],i;
  for(i=0;i<=8;i++)
  {
    scanf("%d",&num[i]);
	printf("%d ",num[i]); 	
  }	

  	heapsort(num,9);
  	printf("\n");
  	for(i=0;i<=8;i++)
  {
    
	printf("%d ",num[i]); 	
  }	
  
}

#include <stdio.h>
#include <stdlib.h>

 void bubble(int arr[],int n)
	{
		int passes,comparisons,i,j;
		int temp;
		passes=n-1;
		comparisons=n-1;
		for (i=0;i<passes;i++)
		{
			for(j=0;j<comparisons-i;j++)
			{
				if(arr[j]>arr[j+1])			
					{
					temp=arr[j];
					arr[j+1]=arr[j];
					arr[j+1]=temp;
				}
			}
		}
	}
	void Selectionsort(int arr[],int array_size)
	{
		int i,j,smallest,temp;
		for(i=0;i<array_size-1;i++)
		{
			smallest=i;
			for(j=i+1;j<array_size;j++)
			{if(arr[smallest]>arr[j])
			smallest=j;
			}
			if (i!=smallest)
			{
				temp=arr[i];
				arr[i]=arr[smallest];
				arr[smallest]=temp;
			}
		}
	}
	int BinarySearch(int arr[],int search,int no)
	{
		int lower=0;
		int upper= no-2;
		int mid;
		while(lower<=upper)
		{
			mid= (lower+upper)/2;
			if(arr[mid]==search)
			return mid;
			
			if(arr[mid]< search)
			lower=mid+1;
			
			else
			upper=mid-1;
		}
		return -1;
		}
	int main ()
	{
		int arr[5]={32,5,7,3,72};
		bubble(arr,5);
		int ret;
		ret=BinarySearch(arr,7,5);
		if(ret!=-1)
		{printf("not found");
		}
		else
		{
			printf("found");
		}
		
		
	}

//Write a C code to find the number of distinct elements in a sorted array.
//this programm was created by Bharati Raja Swami
#include<stdio.h>
int main()
{
	int a[10],no_of_elements,count=0,dummy;
	printf("Enter [number] of elements of array : ");
	scanf("%d",&no_of_elements);
	printf("Enter elements of array :\n");
	for(int i=0;i<no_of_elements;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<no_of_elements;i++)
	{
		for(int j=i+1;j<no_of_elements;j++)
    {
	 		if(a[i]>a[j])
			{
				dummy=a[i];            //for swapping of positions
				a[i]=a[j];
				a[j]=dummy;
			}
		}
	}
	printf("Array sorted in ascending order :\n");
	
	for(int i=0;i<no_of_elements;i++)
	{
		printf("%d ",a[i]);
	}
	for(int i=0;i<no_of_elements;i++)
	{
		if(a[i]!=a[i-1]){count++;}
	}
	printf("\n \nCount of distinct variable is = %d",count);
}

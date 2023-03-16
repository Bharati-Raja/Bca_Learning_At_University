//Write a C code to find the number of distinct elements in a sorted array
#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE]={8,7,7,6,6,5,4,3,3,1};//array must be sorted in order
	int count=0;
	
	printf("Sorted Array in order : ");
	
	for(int i=0;i<SIZE;i++)
	{
		printf("(%d)",a[i]);	
		
		if(a[i]!=a[i-1])
		{
		count++;             //  will evaluated true only if the previous element of array is not equal to latest one
		}  
	}
	
	printf("\n \nCount of distint variable in above array is = %d",count);// this code was prepared by BHARATI RAJA 
	
	return 0;
}

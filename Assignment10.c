//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


#include<stdio.h>

int findType(int n,int *odd)
{
  int od=0,ev=0;
	for(int k=0;k<n;k++)
{
	if(odd[k]%2==0)
	{ev++;}
	else
	{od++;}	
}

		printf(" ARRAY TYPE : ");
	if(od>0&&ev==0)
	{
		return 1;
	}
	if(od==0&&ev>0)
	{
		return 2;
	}
	if(od>0&&ev>0)
	{
		return 3;
	}
	printf("\n");
}
int main()
{
   int result,size;
   printf("enter number of elements in arrray  : ");scanf("%d",&size);
   int arr[size];
   printf("enter elements of arrray  : ");
   for(int i=0;i<size;i++)
   {
   	scanf("%d",&arr[i]);
   }
    
	result=findType(size,arr);
	
	switch(result)
	
	{
		case 1 :printf("ODD ARRAY"); break;
		case 2 :printf("EVEN ARRAY"); break;
		case 3 :printf("MIXED ARRAY"); break;
	}
    
    return 0;
    
    
    
}


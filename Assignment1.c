//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include<stdio.h>

int main()
{int no_of_elements;
printf("enter number of elements of array : ");
	
	scanf("%d",&no_of_elements);
	int a[no_of_elements],negative_count=0,positive_count=0;
	
	
	
	
	printf("\nenter elements of array :\n");
	for(int i=0;i<no_of_elements;i++)
    	{   
		scanf("%d",&a[i]);                     //gets elements of array from user
	    }
	
		for(int j=0;j<no_of_elements;j++)
     	{
	 		    if(a[j]>0)                       //checks if the element of array is positive or not
			    {
			     positive_count++; 
			    }
		    	else
		    	{
		    		negative_count++;
		    	}
		 }

  printf("\nthe total positive values found in array are : %d ",positive_count);
	printf("\nthe total negative values found in array are : %d ",negative_count);
	 
  return 0;                //this code was created by Bharati Raja
}

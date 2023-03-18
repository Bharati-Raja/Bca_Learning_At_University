//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include<stdio.h>
int main()
{
int matrix[3][3],max=0;
int  i,j,count=1;
printf("enter MATRIX elements of (3 x 3) :\n \n");

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
  {
      scanf("%d",&matrix[i][j]);               //for getting input from user
               
  }
                                                 
}
printf(" MATRIX elements are : \n");
 
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
  {
      printf("(%d)",matrix[i][j]);              //for printing elements of matrix
               
  } printf("\n");
                                                
}
for (i=0;i<3;i++)
{
	 int row=i+1; 
	
		for (j=0;j<3;j++)
		{
		if(matrix[i][j]>max){max=matrix[i][j];}               //for storing max value in current row
		}
	
	printf("\nthe element with max value in row %d = %d\n",row,max);
	max=0;
}

  

  return 0;                                                        // CREATED BY BHARATI RAJA SWAMI
}

//Write a C code to find the maximum element in each row of the 3 X 3 matrix

#include<stdio.h>
int main()
{
int matrix[3][3]={{1,2,3},{4,50,6},{7,8,9}};
int max=0,i,j;
printf("MATRIX is :\n \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
  {
      printf("|%d ",matrix[i][j]);
	       if(max<matrix[i][j]){max=matrix[i][j];}                 //executes only if value of max is less then latest element of matrix and value of max will be updated
  }
  printf("|\n");                                                 //for changing position of cursor next line
}
  printf("_________\n \nTe maximum element in the matrix is %d",max);

  return 0;                                                        // CREATED BY BHARATI RAJA SWAMI
}

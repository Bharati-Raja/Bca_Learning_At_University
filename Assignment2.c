//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task
#include<stdio.h>
int main() 
{
  int count=0,number;
  printf("enter a  number : ");
  scanf("%d",&number);
 
  while((number%8)==0)
  {
    printf("entered number %d is valid",number);//valid only if the number id divisible by 8
    count++;
     
    printf("\n \nenter another number : ");
    scanf("%d",&number);
  }
  if((number%8)!=0)
  {
  	printf("\nenterered number is not valid. ");
  	printf("\nvalid number count = %d ",count);
  }
  return 0;
}

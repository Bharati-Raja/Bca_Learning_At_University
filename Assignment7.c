//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include<stdio.h>

int main()
{
	char i[100]; int k;
	int count=0;
	printf("enter string   : ");
	scanf("%s",&i);
	for( k=0;i[k]!=0;k++)
{
	count++;
}

printf("string length  = %d\n",count);
printf("reverse string : ");
	for(k=count;k>=0;k--)
{
	if(i[k]!='\0')
	{
	printf("%c",i[k]);	
		
	}
 
} 
  return 0;
}

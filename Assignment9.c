//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char string[100];
  char ch;
  int arr[26]={0};
  
  printf("please enter string : ");
  scanf("%s",&string);
  
  int len=strlen(string)                   //to know string length
  ,c=97;                                   //as 'a'=97
  for(int i=0;i<len;i++)                   //till length of string
  {
    ch=tolower(string[i]);                 //for turning upper case letters to small(in ctype)
    if(ch>='a'&&ch<='z')                   // ifit lies in range to avoid special characters
    {
    	arr[ch-'a']++;                     //alters only at the index of int array   {if chracter = c which is 99 in int , then index = 99-97=2}
	}
  }
  printf("\nword frequency count from above string : \n");
  for(int i=0;i<26;i++)
  {
    printf("%c ->  %d\n",c,arr[i]);
    c++;
  }
  
  return 0;
}

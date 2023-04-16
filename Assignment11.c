//Convert an decimal to its binary equivalent using a bitwise operator

#include<stdio.h>
#include<math.h>
#define size sizeof(int)*8//size in bits
int main()
{
  int N = 7 ,k,arr[size];
  k=size-1;
  
  while(k>=0)
  {
  	arr[k]=N&1;
  	k--;
  	N>>=1;
  }printf("binary conversion : ");
  for(k=0;k<size;k++)
  {
  	printf("%d",arr[k]);
  }
  return 0;
}

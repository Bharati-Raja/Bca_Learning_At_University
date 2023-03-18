//Can you help your digital design faculty in correcting the assignment on number conversions by writing a program to convert a decimal number to its binary equivalent using a while loop.
//Example, lets say input is 7, output should be 111

#include<stdio.h>
int main()
{
	int deci,n,j,binary=0,i=0;
	int remainder[10];//specifing expected/predicted binary digits in in advance subscripts
	printf("Enter the decimal number : ");
	scanf("%d",&deci);
	
	n=deci;
	
	while(n!=0)
	{
		remainder[i]=n%2;//collects remainder in array (but in reverse order msb at last and lsb at latest position)
           
         
		n=n/2;            //reduces decimal number
		i++;              //increments i for next memory index of array
	}

	printf("\nThe binary conversion of given input is : ");
	
	for( j=i-1;j>=0;j--)    // j=i-1 because in while loop last incremented i is 1 larger than execution of its body 
	
	{
		printf("%d",remainder[j]);
	}
	return 0;
}

//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.

#include<stdio.h>

int main()
{
	
	int a,b,c,tp=1,
	 op;
printf("THIS IS A BASIC CALCULATOR :\nIN THIS YOU HAVE TO ENTER TWO VALUES AND \nFOR OPERATION A AN CHOICE OF OPERATION \n\n");
	while(tp==1)
{   
	tp=0;
	printf("\nMENU :\n1 for addition \n2 for substraction \n3 for multiplication \n4 for devision\n5 for modulo");
	printf("\n\nPLEASE ENTER choice of opperation : ");
    scanf(" %d",&op);
    while(op>5||op==0)
    {
    		printf("\ninvalid input\nPLEASE ENTER valid choice of opperation : ");
    scanf(" %d",&op);
	}
	printf("\nPLEASE ENTER INTEGER A : ");
    scanf("%d",&a);
    printf("PLEASE ENTER INTEGER B : ");
    scanf("%d",&b);
    
    
    
    
	switch(op)
	{
		case 1 :printf("%d + %d = %d ",a,b,a+b);tp=1; break;
		case 2 :printf("%d - %d = %d ",a,b,a-b);tp=1; break;
		case 3 :printf("%d * %d = %d ",a,b,a*b);tp=1; break;
		case 4 :printf("%d / %d = %d ",a,b,a/b);tp=1;break;
		case 5 :printf("%d modulo %d = %d ",a,b,a%b);tp=1; break;
		
	}
	

		printf("\n");
    
    
}

   return 0;

}

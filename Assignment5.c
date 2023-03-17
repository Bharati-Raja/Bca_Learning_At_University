//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

#include<stdio.h>

int main()
{int i,pass_count=0,fail_count=0,abs_count=0,max=0;   //by Bharati Raja Swami

int std_marks[]={10,-1,55,67,32,78,98,24,98,-1,-1,67,87,56,98,56,-1,87,45,56,45,92,-1,86,39,10,-1,55,67,32,78,98,24,98,-1,-1,67,87,56,98,34,-1,87,45,56,45,92,-1,86,39};

for(i=0;i<50;i++)
{
	if(std_marks[i]==-1){abs_count++;}
	else if(std_marks[i]>=50){pass_count++;}
	else {fail_count++;}
}
printf("marks of students :\n");

for( i=0;i<50;i++)
{
	printf("(%d)|",std_marks[i]); //prints the latest element of in loop 

	if(std_marks[i]>max)           // finds the maximum score
	{
	max=std_marks[i];
	}
}
printf("\n \nTotal students                  : %d\n",i);
printf("Maximum score                   : %d",max);
printf("\ntotal number of students passed : %d" ,pass_count);
printf("\ntotal number of students failed : %d",fail_count);
printf("\ntotal number of students absent : %d",abs_count);

return 0;

}


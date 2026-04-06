//Wap to print truth tsble for 3 variable
#include<stdio.h>
#include<math.h>
#define AND &&
#define OR ||

int main(){
	int A,B,C;

	printf(" truth table\n");
	printf("\n  A B  C RESULT\t");

	for(A=0;A<2;A++) 
	{
		for(B=0;B<2;B++)
		{
			for(C=0;C<2;C++)
			{
			printf("\n   %d  %d  %d for AND %d",A,B,C, A AND B AND C);
			}
		}
	}
	printf(" for OR\n ");
	for(A=0;A<2;A++) 
	{
		for(B=0;B<2;B++)
		{
			for(C=0;C<2;C++)
			{
			printf("\n  %d  %d  %d is  for OR %d",A,B,C, A OR B OR C);
			}
		}
	}

return 0;
}








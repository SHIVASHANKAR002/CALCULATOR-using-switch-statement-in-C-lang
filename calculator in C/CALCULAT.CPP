#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,r;
	char o;
	clrscr();
	do
	{
		printf("\nPlease enter the operator (+,-,*,/) : ");
		printf("\n Press 'x' to Exit ");
		scanf("%c",&o);
		switch (o)
		{
			case '+':
				printf ("please enter the operands in (num1 num2) format : ");
				scanf ("%d%d",&a,&b);
				r=a+b;
				printf ("the answer is : %d",r);
				break ;
			case '-':
				printf ("please enter the operands : ");
				scanf ("%d%d",&a,&b);
				r=a-b;
				printf ("the answer is : %d",r);
				break ;
			case '/':
				printf ("please enter the operands : ");
				scanf ("%d%d",&a,&b);
				r=a/b;
				printf ("the answer is : %d",r);
				break ;
			case '*':
				printf ("please enter the operands : ");
				scanf ("%d%d",&a,&b);
				r=a*b;
				printf ("the answer is : %d",r);
		}
	}
	while (o!='x')
}

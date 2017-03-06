#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
float A,B,C,X1,X2,X,Delta;
printf(" *************************");
printf("\n Enter 3 numbers: ");
scanf(" %f %f %f",&A,&B,&C);
Delta=(B*B)-(4*A*C);
 if (Delta>0)
 {
 printf("\n Delta has two answers:\n");
 X1=(-B+sqrt(Delta))/(2*A);
 X2=(-B-sqrt(Delta))/(2*A);
 printf("X1=%f\tX2=%f",X1,X2);
 }
	 else if (Delta==0)
	 {
	 printf("\n Delta has one answer:\n");
	 X=-B/(2*A);
	 printf("X=%f",X);
	 }                                                          
		else
		{
		printf("\n Delta has no answer!");
		}
printf("\n *************************");
getch();
return 0;
}

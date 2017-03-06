#include<stdio.h>
#include<conio.h>
main()
{
int A=10,B;
printf(" -----------------------------\n");
printf(" Multiplication Table for 10\n");
for (int i=1;i<=A;i++)
{
B=i*A;
printf("\n");
printf("\t %i * %i = %i\n",i,A,B);
}
printf("\n ----------------------------");
getch();
return 0;
}


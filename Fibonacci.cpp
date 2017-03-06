#include<stdio.h>
#include<conio.h>
main()
{
int A=1,B=1,Fib=A+B;
while (Fib<100)
{
if (Fib>50)
{
printf("Fibonacci=%i\n\n",Fib);
}
A=B;
B=Fib;
Fib=A+B;
}
getch();
return 0;
}

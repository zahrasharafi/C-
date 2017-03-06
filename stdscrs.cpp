#include<stdio.h>
#include<conio.h>
main()
{
float score[5],p=0,mean,min,max;
printf("Enter 5 scores:\n\n");
for (int i=0;i<=4;i++)
{
scanf("%f",&score[i]);
p+=score[i];
}
printf("\nplus of scores:%5.2f\n\n",p);
mean=(p)/5;
printf("mean of scores:%5.2f\n\n",mean);
min=score[0],max=score[0];
for (int j=1;j<=4;j++)
{
if (score[j]<min)
{
min=score[j];
}
if (score[j]>max)
{
max=score[j];
}
}
printf("maximum score:%5.2f\n\n",max);
printf("minimum score:%5.2f\n\n",min);
getch();
return 0;
}












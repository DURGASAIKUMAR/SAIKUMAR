#include<stdio.h>
void main()
{
int x,y,p,rupees=0;
printf("enter number of rupees:");
scanf("%d",&x);
printf("enter the percentage of discount:");
scanf("%d",&p);
while(x>1)
{
y=((x/100.0)*p);
rupees+=x;
x=x-y;
}
printf("%d",rupees+1);
}

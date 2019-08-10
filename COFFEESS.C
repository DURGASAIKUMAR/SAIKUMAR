#include<stdio.h>
void main()
{
int x,y,p,rupees=0;
printf("enter number of rupees:");
scanf("%d",&x);
  if(x>=0 && x<=10000)
  {
printf("enter the percentage of discount:");
scanf("%d",&p);
  if(p>=1 && p<=100)
  {
while(x>1)
{
y=((x/100.0)*p);
rupees+=x;
x=x-y;
}
    printf("%d",rupees+1);
  }
  }
else
  printf("offer is invalid");
}

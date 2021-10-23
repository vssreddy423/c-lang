//C program for fibonacci series
#include <stdio.h>

int main()
{
int n,i=0;j=0,k=0,sum=0;
printf("enter no.f terms :");
scanf("%d",&n);
printf("%d %d ",i,j);
for(k=2,k<=n;k++)
{
  sum=i+j;
  printf("%d",sum);
  i=j;
  j=sum;
}
}

//consider no.of terms 6

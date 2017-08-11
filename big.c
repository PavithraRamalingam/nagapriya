#include<stdio.h>
void main()
{
int a,b,c;
printf("the values are");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("%d is the biggest number",&a);
}
if((b>a)&&(b>c))
{
printf("%d is the biggest number",&b);
}
if((c>a)&&(c>b))
{
printf("%d is the biggest number",&c);
}
}

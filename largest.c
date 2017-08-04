#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("The numbers are");
scanf("%d %d %d", &a, &b, &c);
if((a>b)&&(a>c))
{
printf("%d is the largest number",a);
}
if((b>a)&&(b>c))
{
printf("%d is the largest number",b);
}
if((c>a)&&(c>a))
{
printf("%d is the largest number",c);
}
}

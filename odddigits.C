#include<stdio.h>
int main()
{
int n,s;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
s=n%10;
if(s%2!=0)
{
print("%d",s);
}
n=n/10;
}
return 0
}

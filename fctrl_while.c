#include<stdio.h>
int main()
{int i,n,f;
printf("Enter an integer : ");
scanf("%d",&n);
while(1)
{
for(i=1;i<=n;i++)
{f = f*i;}
printf("Factorial of %d is %d",n,f);break;
}
return 0;
}

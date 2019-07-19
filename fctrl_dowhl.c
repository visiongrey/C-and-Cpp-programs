#include<stdio.h>
int main()
{int i,n,f;
char ch;
do
{f=1;
printf("Enter an integer : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{f = f*i;}
printf("Factorial of %d is %d",n,f);
printf("\nWant to enter again ?");
scanf("%s",&ch);
}while(ch=='y'||ch=='Y');
return 0;
}

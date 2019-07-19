#include<stdio.h>
#define func(a,b) ((a>b)?a:b)
int main(){
int a,b;
printf("Enter two nos. ");
scanf("%d%d",&a,&b);
printf("%d is greater\n",func(a,b));
return 0;}

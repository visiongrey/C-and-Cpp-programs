#include<stdio.h>
int main()
{int p,c;
printf("Enter purchase amount :");
scanf("%d",&p);
if((p>500)&&(p<=1000))
	c=1;
else if((p>1000)&&(p<=5000))
	c=2;
else if((p>5000)&&(p<=20000))
	c=3;
else if((p>20000)&&(p<=50000))
	c=4;
else if(p>50000)
	c=5;
switch(c)
{case 1:printf("\nDiscount is 5%%");break;
 case 2:printf("\nDiscount is 10%%");break;
 case 3:printf("\nDiscount is 20%%");break;
 case 4:printf("\nDiscount is 25%%");break;
 case 5:printf("\nDiscount is 30%%");break; 
 default:printf("\nDiscount not applicable");break;
}
return 0;
}

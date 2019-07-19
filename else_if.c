#include<stdio.h>
int main()
{int p;
printf("Enter purchase amount :");
scanf("%d",&p);
if((p>500)&&(p<=1000))
	printf("\nDiscount is 5%%");
else if((p>1000)&&(p<=5000))
	printf("\nDiscount is 10%%");
else if((p>5000)&&(p<=20000))
	printf("\nDiscount is 20%%");
else if((p>20000)&&(p<=50000))
	printf("\nDiscount is 25%%");
else if(p>50000)
	printf("\nDiscount is 30%%");
else
	printf("\nDiscount not applicable");
return 0;
}



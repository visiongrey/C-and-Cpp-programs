#include<stdio.h>
int main()
{ int a[20],i,j,f=0,count=0;
    printf("Enter 20 numbers : ");
  for(i=0;i<20;i++)
    {scanf("%d",&a[i]);}

printf("\nPrime numbers are : ");

  for(i=0;i<20;i++)
  { 	if(a[i]==2)
	    { printf("%d ",a[i]);
	      count++;
	    }
		else if(a[i]==1)
		 		f++;
		else 		 
		{ f=0;
		 for(j=2;j<a[i];j++)
			{ if(a[i]%j==0)
				{f++;}
			}
		 if(f==0)
		  {printf("%d ",a[i]);count++;}
		}      
  }

printf("\nNumber of prime numbers entered : %d",count);
return 0;
}

#include<stdio.h>
int main()
{int a[5],sum,c,i,j;
printf("Enter 5 integers : ");
  for(i=0;i<5;i++)
  {scanf("%d",&a[i]);}
	
	for(i=0;i<5;i++)
	  {for(j=0;j<5-i-1;j++)
	    {if(a[j]>a[j+1])
         {c=a[j];
          a[j]=a[j+1];
          a[j+1]=c;
         }
        } 
	  }
	sum=0;  
	for(i=0;i<4;i++)
	   {sum+=a[i];
	   }
	printf("Min sum of 4 nos. = %d",sum);
	sum=0;  
	for(i=5;i>0;i--)
	   {sum+=a[i];
	   }
	printf("\nMax sum of 4 nos. = %d",sum);	
return 0;
}

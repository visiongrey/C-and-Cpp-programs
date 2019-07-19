#include<stdio.h>
int main()
{int i,j,k;
for(i=0;i<5;i++)
{for(j=5;j>i;j--)
{printf("* ");
}
printf("\n");
for(k=0;k<=i;k++)
{printf("  ");
}
}
return 0;
}


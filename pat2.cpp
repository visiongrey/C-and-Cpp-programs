#include<iostream>
using namespace std;
main()
{int i,j,f=1;
for(i=0;i<5;i++)
{for(j=4;j>i;j--)
	cout<<" ";
for(j=i;j<i+f;j++)
 	cout<<j+1;
if(i>0)
	{ for(j=i;j>0;j--)
		cout<<j+(f-1);
	}
cout<<endl;f++;
}
} 

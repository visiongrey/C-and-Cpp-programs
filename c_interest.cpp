#include<iostream>
using namespace std;
main()
{float p,r,a,si,i;
int t;
cout<<"Enter initial amount : ";
cin>>p;
cout<<"Enter number of years : ";
cin>>t;
cout<<"Enter interest rate(percent per year) : ";
cin>>r;
for(i=0;i<t;i++)
{a=0; 
si=(p*r)/100;
a=p+si;
p=a;
}
cout<<"At the end of "<<t<<" years, you will have "<<a<<" rupees";
}


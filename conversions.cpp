#include<iostream>
using namespace std;
void f1(float a);
void f2(float a);
main()
{int x;
char c;
do
{system("cls");
 cout<<"\t"<<"Enter choice"<<endl;
 cout<<"1.Gallons to cubic feet"<<endl<<"2.Celsius to Fahrenheit"<<endl;
 cin>>x;
 switch(x)
 {float b;
 case 1: cout<<"Enter value in gallons : ";cin>>b;f1(b);break;
 case 2: cout<<"Enter value in celsius : ";cin>>b;f2(b);break;
 }
cout<<endl<<"Want to enter again ?(y/n)"<<endl;
cin>>c;
}while(c=='y');
}
void f1(float a)
{ cout<<a*(1/7.481)<<" cubic feet";
}
void f2(float a)
{ cout<<a*(9/5)+32<<" fahrenheit";
}



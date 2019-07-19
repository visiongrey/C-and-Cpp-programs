#include<iostream>
using namespace std;
class ops
{public:
	void f1(float x,float y)
	{cout<<endl<<"Result = "<<x+y;
	}
	void f2(float x,float y)
	{cout<<endl<<"Result = "<<x-y;
	}
	void f3(float x,float y)
	{cout<<endl<<"Result = "<<x*y;
	}
	void f4(float x,float y)
	{cout<<endl<<"Result = "<<x/y;
	}
};
main()
{ ops c;  
 int n;
 char e; 
 float a,b;
	do
	{system("cls");
	cout<<"\t\tCALCULATOR"<<endl;
 	cout<<"Enter a number : ";
 	cin>>a;
 	cout<<endl<<"OPERATIONS"<<endl;
 	cout<<endl<<"1.Add"<<endl<<"2.Subtract"<<endl<<"3.Multiply"<<endl<<"4.Divide"<<endl;
	cout<<endl<<"Enter operation : ";
	cin>>n;
	cout<<endl<<"Enter second number : ";
 	cin>>b;
	switch(n)
	{case 1:c.f1(a,b);break;
	case 2:c.f2(a,b);break;
	case 3:c.f3(a,b);break;
	case 4:c.f4(a,b);break;
	}
	cout<<endl<<"Clear ?(y/n)"<<endl;
	cin>>e;
}while(e=='y');
}


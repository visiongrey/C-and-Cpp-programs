#include<iostream>
using namespace std;
void func1(int *b,int x);
void func2(int *b,int x);
void func3(int *b,int x);
void func4();
int main(){
int c;
int i,n,a[50];
	cout<<"Enter number of elements to be entered(max 50) : ";
	cin>>n;
	for(i=0;i<n;i++){
	cin>>a[i];
	}
cout<<"Enter your choice :\n";
cout<<"1. Display the elements of array\n2. Search for an element\n";
cout<<"3. Insert an element\n4. Delete an element\n";
cin>>c;
switch(c){
	case 1 : func1(a,n);break;
	case 2 : func2(a,n);break;
	case 3 : func3(a,n);break;
	case 4 : func4();break;
	default: cout<<"Wrong choice";break;
}
return 0;
}
	
	void func1(int *b,int x){
		int i;
		for(i=0;i<x;i++)
		{ 
		cout<<*b<<" ";b++;
			}		
	}
	
void func2(int *b,int x){
	int e,i;
	cout<<"Enter the element : ";
	cin>>e;
	for(i=0;i<x;i++){
		if(*b==e){
			cout<<"Element found at position "<<i+1;break;
		}
		else
		b++;
	}
}
	void func3(int *b,int x){
		int e,p,i;
		cout<<"Enter the element : ";cin>>e;
		cout<<"Enter the position : ";cin>>p;
		//for(i=0;i<x-1;i++){
		//	b++;
		//}
		//cout<<*b<<"...";
		for(i=x+1;i>=p-1;i--){
			b[x+1]=b[x];
		}
		b[p-1]=e;
		//for(i=p-1;i>0;i--){
		//	b--;
		//}
		for(i=0;i<x+1;i++)
		{ 
		cout<<*b<<" ";b++;
			}	
	}
void func4(){
	cout<<"4";
}

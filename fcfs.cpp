#include<iostream>
using namespace std;
int main(){
int i,n;
cout<<"Enter the no. of processes :";
cin>>n;
int bt[n],wt[n],tt[n];
cout<<"Enter the burst times :";
for(i=0;i<n;i++){
cout<<"p["<<i+1<<"] : ";
cin>>bt[i];
}
wt[0]=0;
for(i=1;i<n;i++){
wt[i]=w[i-1]+bt[i-1];
}
tt[0]=bt[0];
for(i=1;i<n;i++){
tt[i]=tt[i-1]+bt[i-1];
}
cout<<"Process\tBurst Time\tWaiting Time\tTurnaround time";
for(i=0;i<n;i++){
cout<<"p["<<i+1<<"]\t"<<bt[i]<<"\t"<<wt[i]<<"\t"<<tt[i];
}
int awt=0,att=0;
for(i=0;i<n;i++){
awt+=wt[i];
att+=tt[i];
}
awt/=n;
att/=n;
cout<<"\n"<<"Average waiting time : "<<awt;
cout<<"\n"<<"Average turnaround time : "<<att;
return 0;
}

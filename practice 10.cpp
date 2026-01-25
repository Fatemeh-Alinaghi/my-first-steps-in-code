#include <iostream>
using namespace std;

int main()
{
int i;
int j;
int x;
long fact=1;
{
	cin>>x;
for(i=0;i<x/2;i++)
if(x%i!=0){
for(j=1;j<=x;j++)
	fact*=j;	
}else{
cout<<"not prime"<<endl;	
}}

cout<<"factorial:"<<fact<<endl;
return 0;
}
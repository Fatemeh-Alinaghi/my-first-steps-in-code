#include <iostream>
using namespace std;

main()
{
	int i;
	int j;
	int b;
	int n;
	cin>>n;
	
	float a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++)
	{
		if(a[i]>=a[j]){
			float b=a[i];
			a[i]=a[j];
			a[j]=b;}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<"       ";
	}
	
	cout<<endl<<endl;
	
	{
	for(i=0;i<n-1;i++){
	for(j=i+1;j<n;j++)
	{
		if(a[i]<=a[j]){
			float b=a[i];
			a[i]=a[j];
			a[j]=b;}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<"       ";
	}
	}
	
	return 0;	
}
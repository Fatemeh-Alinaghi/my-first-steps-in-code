#include <iostream>
using namespace std;
main()
{
	int i;
	int a[i];
	int c=0;
	float avg,sum=0;
	
	for(i=0;i<20;i++)
	{
		cin>>a[i];
		
		if(a[i]<0)
		continue;
		
		sum+=a[i];
		c++;
		if(sum>1000)
		break;
	
	avg=(sum/c);
		cout<<"avg :"<<avg<<endl;
		cout<<"count :"<<c;
	}
	
	return 0;
}
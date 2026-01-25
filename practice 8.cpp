#include <iostream>
using namespace std;

int main()
{
	int i;
	for(int i=25;i>0;i--)
	{
		if(i%2==0)
		cout<<i<<" ";
		}
		cout<<endl;

	{
		for(int i=23;i>0;i--)
		if(i%2!=0)
		cout<<i<<" ";
	}
	return 0;
}
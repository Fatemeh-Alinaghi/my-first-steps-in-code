#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	cin>>x>>y;
	if(x>y){
		cout<<x<<endl;
		x++;
}else{
		cout<<y<<endl;
		y--;
	}
	cout<<x<<"  "<<y;
	return 0;
}


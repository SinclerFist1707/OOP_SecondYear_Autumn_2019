#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1,x2,y1,y2,x,y;
	cin>>x1>>y1>>x2>>y2;
	x=abs(x1-x2);
	y=abs(y1-y2);
	while(x*y>0)
		if(x>=y)
			x=x%y;
		else
			y=y%x;
	cout<<endl;
	if(x>0)
		cout<<x;
	if(y>0)
		cout<<y;
	system("pause");
	return 0;
}

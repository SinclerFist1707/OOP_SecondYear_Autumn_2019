#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int xa,ya,xb,yb,xc,yc,xd,yd,ab,bc,ca;
	cout<<"A";
	cin>>xa>>ya;
	cout<<"B";
	cin>>xb>>yb;
	cout<<"C";
	cin>>xc>>yb;
	cout<<"D";
	cin>>xd>>yd;
	ab=(xa-xb)*(yd-yb)-(xd-xb)*(ya-yb);
	bc=(xb-xc)*(yd-yc)-(xd-xc)*(yb-yc);
	ca=(xc-xa)*(yd-ya)-(xd-xa)*(yc-ya);
	if(ab>0&&bc>0&&ca>0)
		cout<<"0";
	if(ab<0||bc<0||ca<0)
		cout<<"1";
	if(ab==0||bc==0||ca==0)
		cout<<"2";
	system("pause");
	return 0;
}

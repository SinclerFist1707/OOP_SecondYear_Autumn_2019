#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a1,b1,a2,b2,a,b,c,l1;
	double p=3.141592653589,l=40000;
	cin>>a1>>b1>>a2>>b2;
	a=abs(a1-a2); b=abs(b1-b2);
	if(b==180)
		c=((2-pow((sin(p*a/180)/sin(p*(90-a/2)/180)),2))/2);
	else
		c=((2-pow((sin(p*a/180)/sin(p*(90-a/2)/180)),2)-pow((sin(p*b/180)/sin(p*(90-b/2)/180)),2))/2);
	if(c>1)
		while(c>1)
			c-=2;
	if(c==1)
		c-=0.0000000000001;
	if(c==-1)
		c+=0.0000000000001;
	if(c<-1)
		while(c<-1)
			c+=2;
	if(b==180)
		l1=(1-acos(c)/p)/2*l;
	else
		l1=acos(c)/p/2*l;
	cout<<l1;
	system("pause");
	return 0;

#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
using namespace std;
class shape
{
	protected:
	float s1,s2;
	public:
		virtual void area()=0;
		void getdata(int x,int y=0){
		s2=y;
		s1=x;
		}
};
class rectangle:public shape
{
	public:
		void area();
};
void rectangle::area()
{
	cout<<"Area of rectangle(l*b) = "<<s1*s2;
}
class triangle:public shape
{
	public:
		void area();
};
void triangle::area()
{
	cout<<"Area of triangle(b*h/2) = "<<s1*s2/2;
}

class circle:public shape
{
	public:
		void area();
};
void circle::area()
{
	cout<<"Area of circle(pi*r*r) = "<<M_PI*s1*s1;
}

int main()
{
	shape *s[3];
	triangle t;
	s[0]=&t;
	rectangle r;
	s[1]=&r;
	circle c;
	s[2]=&c;
	float x,y;
	cout<<" Enter the value of x & y for triangle: ";
	cin>>x>>y;
	s[0]->getdata(x,y);
	cout<<" Enter the value of x & y for rectangle: ";
	cin>>x>>y;
	s[1]->getdata(x,y);
	cout<<" Enter the radius of circle : ";
	double rd;
	cin>>rd;
	s[2]->getdata(rd,0);
	cout<<endl<<endl;
	s[0]->area();
	s[1]->area();
	s[2]->area();
}



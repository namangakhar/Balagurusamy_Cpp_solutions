#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;
 
 
////Q1
//class FLOAT1
//{
//	float f;
//	public:
//		FLOAT1(){
//		};
//		FLOAT1(float x):f(x){};
//		FLOAT1 operator +(FLOAT1 f1);
//		FLOAT1 operator -(FLOAT1 f1);
//		FLOAT1 operator *(FLOAT1 f1);
//		FLOAT1 operator /(FLOAT1 f1);
//		void dispvalue(){
//			cout<<f<<endl;
//		}
//};
//FLOAT1 FLOAT1::operator +(FLOAT1 f1)
//{
//	FLOAT1 x;
//	x=(f+f1.f) ;
//	return x;
//}
//
//FLOAT1 FLOAT1::operator -(FLOAT1 f1)
//{
//	FLOAT1 x((f-f1.f));
//	return x ;
//}
//FLOAT1 FLOAT1::operator *(FLOAT1 f1)
//{
//	FLOAT1 x(f*f1.f);
//	return x;
//}
//FLOAT1 FLOAT1::operator /(FLOAT1 f1)
//{
//	FLOAT1 x(f/f1.f);
//	return x;
//}
//
//int main()
//{
//	FLOAT1 a(10),b(5),c,d,e,f;
//	c=a+b;
//	d=a-b;
//	e=a*b;
//	f=a/b;
//	a.dispvalue();
//	b.dispvalue();
//	c.dispvalue();
//	d.dispvalue();
//	e.dispvalue();
//	f.dispvalue();
//	return 0;	
//}



////Q2
//class polar
//{
//	float mag,degree;
//	public:
//		polar(){
//		};
//		polar(float x,float y):mag(x){
//			degree=(M_PI/180)*y;
//		};
//		polar operator+(polar x);
//		void show(){
//			cout<<"Mag = "<<mag<<endl<<"Degree = "<<degree<<endl;
//		}
//};
//polar polar::operator+(polar x)
//{
//	float x1,y1,x2,y2;
//	x1=mag*cos(degree);
//	y1=mag* sin(degree);
//	x2=(x.mag) * (cos(x.degree));
//	y2=(x.mag) * sin(x.degree);
//	x1+=x2;
//	y1+=y2;
//	polar p;
//	p.degree=atan(y1/x1);
//	p.mag=sqrt(x1*x1+y1*y1);
//	return p;
//}
//
//int main()
//{
//	polar a(10,30),b(5,45),c;
//	c=a+b;
//	a.show();
//	b.show();
//	c.show();
//	
//	
//}



////Q3
//class matrix
//{
//	int** mat;
//	int rows,columns;
//	public:
//		matrix(){};
//		void create(int ,int);
//		matrix operator+(matrix x);
//		matrix operator-(matrix x);
//		matrix operator*(matrix x);
//		void get();
//};
//void matrix::create(int x,int y)
//{
//	rows=x;
//	columns=y;
//	mat=new int*[rows];
//	cout<<"Enter values "<<endl;
//	for(int i=0;i<rows;i++)
//	{
//		mat[i]=new int[columns];
//		for(int j=0;j<columns;j++)
//		{
//			cout<<i<<" , "<<j<<" : ";
//			cin>>mat[i][j];
//		}
//	}
//	cout<<endl<<endl;
//}
//void matrix::get()
//{
//	cout<<"["<<endl;
//	for(int i=0;i<rows;i++)
//	{
//		for(int j=0;j<columns;j++)
//		{
//			cout<<mat[i][j]<<"\t";
//		}
//		cout<<endl;
//	}
//	cout<<"]"<<endl;
//	cout<<endl<<endl;
//}
//
//matrix matrix::operator+(matrix x)
//{
//	matrix m;
//	if(rows==x.rows && columns==x.columns){
//	m.rows=rows;
//	m.columns=columns;
//	m.mat=new int*[rows];
//	for(int i=0;i<rows;i++)
//	{
//		m.mat[i]=new int[columns];
//		for(int j=0;j<columns;j++)
//		{
//			m.mat[i][j]=mat[i][j]+x.mat[i][j];
//		}
//	}
//}
//	return m;
//}
//matrix matrix::operator-(matrix x)
//{
//	matrix m;
//	if(rows==x.rows && columns==x.columns){
//	m.rows=rows;
//	m.columns=x.columns;
//	m.mat=new int*[m.rows];
//	for(int i=0;i<rows;i++)
//	{
//		m.mat[i]=new int[m.columns];
//		for(int j=0;j<columns;j++)
//		{
//			m.mat[i][j]=mat[i][j]-x.mat[i][j];
//		}
//	}
//}
//	return m;
//
//}
//
//matrix matrix::operator*(matrix x)
//{
//	matrix m;
//	if(x.rows==columns){
//	m.rows=rows;
//	m.columns=x.columns;
//	m.mat=new int*[rows];
//	for(int i=0;i<m.rows;i++)
//	{
//		m.mat[i]=new int[columns];
//		for(int j=0;j<m.columns;j++)
//		{
//			m.mat[i][j]=0;
//			for(int a=0;a<columns;a++)
//			{
//				m.mat[i][j]+=mat[i][a]*x.mat[a][j];
//			}
//		}
//	}
//}
//	return m;
//}
//int main()
//{
//	matrix a,b,c,d,f,g;
//	a.create(3,2);
//	b.create(3,2);
//	f.create(2,3);
//	g=a*f;
//	c=a+b;
//	d=a-b;
//	a.get();
//	b.get();
//	c.get();
//	d.get();
//	a.get();
//	f.get();
//	g.get();
//}



////Q4
//#include<cstring>
//class String
//{
//	char* str;
//	public:
//		String(){
//		};
//		String(char *s){
//			setstr(s);
//		}
//		void setstr(char *s);
//		void setString();
//		bool operator==(String);
//		void show();
//};
//void String::show(){
//	cout<<str<<endl;
//}
//void String::setString()
//{
//	str=new char[20];
//	cout<<"Enter the string : ";
//	gets(str);
//}
//void String::setstr(char* s)
//{
//	str=new char[strlen(s)];
//	strcpy(str,s);
//	
//}
//bool String::operator==(String s)
//{
//	if(!(strcmp(str,s.str)))
//	return true;
//	return false;
//}
//
//int main()
//{
//	char p[3]="xy";
//	String s1("sandbag"),s2,s3(s1);
//	s2.setString();
//	if(s1==s2)
//	cout<<"equal";
//	s1.show();
//	s2.show();
//	s3.show();
//	}



//Q5
class rect;
class polar
{
	float mag,degree;
	public:
		polar(){
		};
		polar(float x,float y):mag(x){
			degree=(M_PI/180)*y;
		};
		float getmag(){return mag;
		};
		float getdegree(){return degree;
		};
		void show(){
			cout<<"Mag = "<<mag<<endl<<"Degree = "<<degree<<endl;
		};
};
class rect
{
	float x,y;
	public:
		rect(){};
		rect(int a, int b){x=a;y=b;};
		rect(polar x);
		void show(){
			cout<<"x = "<<x<<"y = "<<y<<endl;
		}
		operator polar();
		
};
rect::rect(polar x1)
{
	x=(x1.getmag()) * (cos(x1.getdegree()));
	y=(x1.getmag()) * sin(x1.getdegree());
}
rect::operator polar()
{
	return polar(sqrt(x*x+y*y),atan(y/x)*180/M_PI);
}
int main()
{
	polar a(10,45),c;
	rect b(10,10),d;
	c=b;
	d=a;
	a.show();
	b.show();
	c.show();
	d.show();
}

#include<iostream>
#include<cstring>
using namespace std;

//Q1
class account
{
	char name[20],*type;
	int accno,balance,x;
	public:
	account(int accno)
	{				//constructor
	this->accno=accno;
	cout<<"Enter name of Account holder : ";
	cin.getline(name,20);
	cout<<"Enter Balance : ";
	cin>>balance;
	type=new char[20];
	changetype();
	
	}
	
	void deposit(int n)
	{
		if(n>0)
		{
		balance+=n;
		cout<<"Amount "<<n<<" deposited."<<endl;
		}
	}
	void withdraw(int n)
	{
		if(n>0)
		{
		balance-=n;
		cout<<"Amount "<<n<<" Withdrawn."<<endl;
		}
	}
	void accdetails()
	{
		cout<<"This account belongs to "<<name<<" and has Rs"<<balance<<" in it";
	}
	void changetype()
	{
		while(true)
	{
		cout<<"Please enter account type"<<endl<<"1. Savings"<<endl<<"2. Checking"<<endl;
		cin>>type;
		x=strcmp("checking",type);
		if(!x)
		break;
		cout<<"Wrong type please enter correct type"<<endl;
		}
	}
};

int main()
{
	account naman(420);
	naman.deposit(3000);
	naman.accdetails();
	naman.withdraw(421);
	naman.accdetails();
}


////Q2
//class vector
//{
//	float *vec,n;
//	public:
//	vector(int n){
//		this->n=n;
//		this->vec=new float[n];
//	}
//		
//	void initialise(){
//		cout<<"Enter the values";
//		for(int i=0;i<n;i++)
//		cin>>vec[i];
//	}
//	void modify(int n,float val){
//		vec[n-1]=val;
//	}
//	
//	void multiply(int s)
//	{
//		for(int i=0;i<n;i++)
//		vec[i]*=s;
//	}
//	void display()
//	{for(int i=0;i<n;i++)
//		cout<<vec[i]<<" ";
//	cout<<endl;
//	}
//	friend void addvectors(vector x,vector y);
//};
//
//void addvectors(vector x, vector y)
//{
//	if(x.n==y.n){
//		vector v3(x.n);
//		for(int i=0;i<x.n;i++)
//		v3.vec[i]=x.vec[i]+y.vec[i];
//		v3.display();
//	}
//	else{
//		cout<<"mismatched lengths"<<endl;
//	}
//}
//
//int main()
//{
//	vector v(5),v2(6),v3(5);
//	v.initialise();
//	v3.initialise();
//	v.display();
//	v.modify(3,10);
//	v.display();
//	addvectors(v,v2);
//	addvectors(v,v3);
//}


//
////Q5
//class db;
//class dm{
//	int m,cm;
//	public:
//		dm(int x,int y){
//		m=x;cm=y;}
//		dm(){};
//		void show()
//		{cout<<"m = "<<m<<endl<<"cm = "<<cm<<endl;}
//		friend void addobj(dm,db);
//};
//class db{
//	int feet,inch;
//	public:
//		db(){};
//		db(int x,int y)
//		{
//		feet=x;inch=y;}
//		void show()
//		{cout<<"feet= "<<feet<<endl<<"inch = "<<inch<<endl;}
//		friend void addobj(dm,db);
//		friend dm cvttodm(db);
//};
//dm cvttodm(db b)
//{
//	int cm;
//	b.inch+=(b.feet*12);
//	cm=2.54*b.inch;
//	return dm(cm/100,cm%100);
//}
//void addobj(dm y,db x)
//{
//	int a;
//	cout<<"press 1 if you want result to be displayed in metric units , 2 for imperial units ";
//	cin>>a;
//	if(a==1)
//	{
////		int cm,m,fcm,fm;
////		x.inch+=12*x.feet;
////		cm=x.inch*2.54;
////		m=cm/100;
////		cm=cm%100;
////		
////		fcm=y.cm+cm;
////		fm=y.m+m+(fcm/100);
////		fcm=fcm%100;
//	dm a=cvttodm(x);
//	cout<<"m = "<<y.m+a.m<<endl<<"cm = "<<y.cm+a.cm<<endl;
//	
//		
//	}
//	else if(a==2){
//	int inch,feet;
//	y.cm+=(y.m*100);
//	inch=y.cm/2.54;
//	feet=inch/12;
//	inch=inch%12;
//	
//	int ffeet,finch;
//	finch=x.inch+inch;
//	ffeet=x.feet+feet+(finch/12);
//	finch=finch%12;
//	cout<<"feet= "<<feet<<endl<<"inch = "<<inch<<endl;
//	}
//	else
//	{cout<<"Wrong Input";
//	}
//	
//	
//	
//}
//
//int main()
//{
//	db a(5,0);
//	dm c(10,0);
//	a.show();
//	c.show();
//	addobj(c,a);
//	addobj(c,a);
//	
//}

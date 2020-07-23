#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

//Q1
//class list
//{
//	char *name;
//	int code;
//	float cost;
//	public:
//		void getdata(char* s,int c,int m)
//		{ name= new char[strlen(s)];
//		strcpy(name,s);
//		code=c;
//		cost=m; }
//		void showdata()
//		{
//			cout<<resetiosflags(ios::right)<<setw(12)<<setiosflags(ios::left)<<name<<setw(8)<<setiosflags(ios::right)<<code<<setw(8)<<setprecision(2)<<setiosflags(ios::fixed)<<cost<<endl;
//		}
//};
//
//void setlist(list &l)
//{
//	char name[13];
//	int cost;
//	float c;
//	cout<<"Enter name : ";
//	fflush(stdin);
//	cin.getline(name,13);
//	cout<<"Enter cost : ";
//	cin>>cost;
//	cout<<"Enter code : ";
//	cin>>c;
//	l.getdata(name,cost,c);
//}
//int main()
//{
//	list l1,l2,l3;
//	setlist(l1);
//	setlist(l2);
//	setlist(l3);
//	cout<<setw(12)<<setiosflags(ios::left)<<"Name"<<setw(8)<<setiosflags(ios::right)<<"Code"<<setw(8)<<"Cost"<<endl;
//	cout<<setw(28)<<setfill('-')<<""<<endl;
//	cout<<setfill(' ');
//	l1.showdata();
//	l2.showdata();
//	l3.showdata();	
//}


//Q2
void get(char* s)
{
	int n=strlen(s);
	int c=0,s1=0,l=0,lines=1,words=0,chars=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]!=' '&&s[i]!='\n')
			{chars++;c=1;
			if(s1)
			{
				words++;s1=0;
			}
			if(l)
			{lines++;l=0;}
			cout<<"if1";
			}
			
		if(s[i]==' ')
		{	c=0;
		s1=1;
		cout<<"if2";}
		if(s[i]=='\n')
		{
			c=0;l=1;s1=1;
			cout<<"if3";
		}
		cout<<" "<<i<<"\n";
	}
	cout<<"lines : "<<lines<<endl<<"Words : "<<words<<endl<<"characters : "<<chars<<endl;
}
int main()
{
	char n[]=" hi hello \n how\nare ";
	get(n);
}

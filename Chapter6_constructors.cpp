#include <bits/stdc++.h>
using namespace std;

////Q1
//class String
//{
//	char *str;
//	public:
//		String()
//		{str=new char[1];}
//		String(char *p)
//		{
//			str=new char[strlen(p)+1];
//			for(int i=0;i<strlen(p);i++){
//				str[i]=p[i];
//			}
//		}	
//		friend String addstr(String p,String p1);
//		void printstr(){
//			cout<<str<<endl;
//		}
//};
//String addstr(String p,String p1)
//{
//	int len=strlen(p.str)+strlen(p1.str);
//	String s;
//	s.str=new char[len+1];
//	strcpy(s.str,p.str);
//	strcat(s.str,p1.str);
//	return s;
//}
//int main()
//{
//	String s1;
//	String s2("Well Done!");
//	String s4=s2;
//	String s3=addstr(s1,s2);
//	s1.printstr();
//	s2.printstr();
//	s3.printstr();
//	s4.printstr();	
//}



//Q2
class books
{
	char **author,**title,**publisher;
	float* price;
	int* copies;
	int total;
	static int succ,unsucc;
	void buy(int);
	void details(int i);
	public:
		static void showhistory();
		books();
		void search();
		void updateprice();
};
int books::succ=0;
int books::unsucc=0;

books::books()
{
	cout<<"how many different total are in the library? : ";
	cin>>total;
	author=new char*[total];
	title=new char*[total];
	publisher=new char*[total];
	price=new float[total];
	copies=new int[total];
	for(int i=0;i<total;i++)
	{
		author[i]=new char[30];
		title[i]=new char[30];
		publisher[i]=new char[20];
		cin.ignore();
		cout<<setw(30)<<"enter Title of book "<<i+1<<" : ";
		gets(title[i]);
		cout<<setw(30)<<"enter author of book "<<i+1<<" : ";
		gets(author[i]);
		cout<<setw(30)<<"enter price of book "<<i+1<<" : ";
		cin>>price[i];
		cin.ignore();
		cout<<setw(30)<<"enter publisher of book "<<i+1<<" : ";
		gets(publisher[i]);
		cout<<setw(30)<<"enter Copies of book "<<i+1<<" : ";
		cin>>copies[i];
		cout<<endl<<endl;	
	}
}


void books::details(int i)
{
	cout<<setw(30)<<"Title"<<setw(30)<<"Author"<<setw(20)<<"Publisher"<<setw(8)<<"Price"<<setw(8)<<"Copies"<<endl;
	cout<<setw(30)<<title[i]<<setw(30)<<author[i]<<setw(20)<<publisher[i]<<setw(8)<<price[i]<<setw(8)<<copies[i]<<endl<<endl;
}


void books::search()
{
	cin.ignore();
	char n[50],a[50];
	int x,y,count=-1;
	cout<<"Enter the Title of book you wish to search : ";
	gets(n);
	cout<<"Enter the author of book you wish to search : ";
	gets(a);
	for(int i=0;i<total;i++)
	{
	x=strcmp(title[i],n);
	y=strcmp(author[i],a);
	if(x==0 && y==0)
	count=i;
	}
	if(count>=0 && copies[count]>0)
	{
	cout<<"The book is present , book number:"<<count+1<<endl;
	cout<<"to buy press 1 : ";
	cin>>x;
	if(x)
	buy(count);
	else
	{
	cout<<"thank you for coming"<<endl;
	unsucc++;}
	}
	else
	{
	cout<<"No such book in library currently"<<endl;
	unsucc++;}
}


void books::buy(int count)
{
		int x;
		details(count);
		cout<<"Enter the number of copies you need : ";
		cin>>x;
		if(x<=copies[count])
		{
			cout<<"Total Price :"<<price[count]*x<<endl;
			copies[count]=copies[count]-x;
			succ++;
		}
		else
		{
		cout<<"not enough copies present."<<endl;	
		unsucc++;}
}

void books::updateprice()
{
	cin.ignore();
	char n[50],a[50];
	int x,y,count=-1;
	cout<<"Enter the Title of book you wish to search : ";
	gets(n);
	cout<<"Enter the author of book you wish to search : ";
	gets(a);
	for(int i=0;i<total;i++)
	{
	x=strcmp(title[i],n);
	y=strcmp(author[i],a);
	if(x==0 && y==0)
	count=i;
	}
	if(count>=0)
	{
	cout<<"Enter new price";
	cin>>price[count];
	}
}

void books::showhistory(void){
	cout<<setw(20)<<"successfull"<<setw(20)<<""<<setw(20)<<"Unsuccessful"<<endl;
	cout<<setw(20)<<succ<<setw(20)<<""<<setw(20)<<unsucc<<endl;
}
int main()
{
	int q;
	books l1;
	books* j;
	j=&l1;
	do{
	j->search();	
	cout<<"do you want to search for another book? press 0 for no , 1 for yes : ";
	cin>>q;
	}while(q);
	j->showhistory();
}

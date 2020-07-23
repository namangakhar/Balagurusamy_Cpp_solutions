#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;

////Q1
//int main()
//{
//	char x,c1='G';
//	int i=0,c;
//	fstream file("chapter11.txt",ios::in|ios::ate);
//	file.put(c1);
//	file.close();
//	file.open("chapter11.txt",ios::in);
//	fstream fout("new1.txt",ios::out);
//	file.get(x);
//	while(file.eof()==0)
//	{
//		if(c||x!=' ')
//		{
//		c=1;
//		fout.put(x);
//		}
//		if(x==' ')
//		c=0;
//	file.get(x);		
//	}
//
//}




////Q2
//int main()
//{
//	char x[10],c1='G';
//	int i=0,c;
//	fstream file;
//	file.open("chapter11.txt",ios::in|ios::out|ios::ate);
//	fstream fout("new1.txt",ios::out);
//	file.seekg(0,ios::beg);
//	file>>x;
//	while(file.eof()==0)
//	{
//		cout<<resetiosflags(ios::right)<<setw(12)<<setiosflags(ios::left)<<x;
//		file.get(c1);
//		while(c1==' ')
//			file.get(c1);
//		file>>c;
//		cout<<setw(5)<<setiosflags(ios::right)<<c<<endl;
//		file>>x;
//		}
//}



//Q3
class telephone
{
	char name[10];
	int number;
	public:
		void setdata(char* str,int no)
		{
		strcpy(name,str);
		number=no;
		}
		void getdata()
		{
			cout<<resetiosflags(ios::right)<<setw(12)<<setiosflags(ios::left)<<name<<setw(5)<<setiosflags(ios::right)<<number<<endl;
		}
		void update(int no)
		{number=no;
		}
		bool isno(int no)
		{if(number==no)
		return true;
		return false;
		}
		bool isname(char *s)
		{if(!strcmp(name,s))
		return true;
		return false;
		}
};
fstream fout;
	void updateno(int objs)
	{
		fout.clear();
		fout.seekg(0,ios::beg);
		char x[10];
		int a=0,i=0;
		telephone t[objs];
		while(fout)
		{fout.read((char*)&t[i],sizeof(t[i]));
		i++;}
		fout.clear();
		cout<<"Enter name to Update Number : ";
		cin>>x;
		for(int i=0;i<objs;i++)
		{
			if(t[i].isname(x))
			{
				cout<<"enter no to be updated : ";
				cin>>a;
				t[i].update(a);
				fout.seekg(i*sizeof(t[i]),ios::beg);
				fout.write((char*)&t[i],sizeof(t[i]))<<flush;
			}	
		}
		if(!a)
		cout<<"no contact of name : "<<x<<endl;
	}
	void findno(int objs)
	{
		fout.clear();
		fout.seekg(0,ios::beg);
		char x[10];
		int a=0,i=0;
		telephone t[objs];
		while(fout)
		{fout.read((char*)&t[i],sizeof(t[i]));
		i++;}
		fout.clear();
		cout<<"Enter name to Update Number : ";
		cin>>x;
		for(i=0;i<objs;i++)
		{
			if(t[i].isname(x))
			{
				t[i].getdata();
				a=1;
			}	
		}
		if(!a)
		cout<<"no contact of name : "<<x<<endl;
	}
void findname(int objs)
	{
		fout.clear();
		fout.seekg(0,ios::beg);
		int a=0,x,i=0;
		telephone t[objs];
		while(fout)
		{fout.read((char*)&t[i],sizeof(t[i]));
		i++;}
		fout.clear();
		cout<<"Enter no to find name : ";
		cin>>x;
		for(i=0;i<objs;i++)
		{
			if(t[i].isno(x))
			{
				t[i].getdata();
				a=1;
			}	
		}
		if(!a)
		cout<<"no contact of number : "<<x<<endl;
	}
	void displayall(int objs)
	{
		fout.clear();
		fout.seekg(0,ios::beg);
		int a=0,x,i=0;
		telephone t[objs];
		while(fout)
		{fout.read((char*)&t[i],sizeof(t[i]));
		i++;}
		fout.clear();
		for(i=0;i<objs;i++)
		{
			t[i].getdata();	
		}
	}


int main()
{
	telephone john,naman;
	john.setdata("John",1234);
	naman.setdata("Naman",45678);
	fout.open("new1.txt",ios::out|ios::trunc);
	fout.write((char*)&john,sizeof(john));
	fout.write((char*)&naman,sizeof(naman));
	fout.close();
	fout.open("new1.txt",ios::out|ios::in|ios::ate);
	int objs=fout.tellp()/sizeof(john);
	cout<<"objs : "<<objs<<endl;
	int x=1;
	while(x)
	{
		cout<<"1.find no"<<endl<<"2.find name"<<endl<<"3.update obj"<<endl<<"4. display all"<<endl;
		cin>>x;
		switch(x)
		{
			case 1:findno(objs);break;
			case 2:findname(objs);break;
			case 3:updateno(objs);break;
			case 4:displayall(objs);break;
			case 0:break;
			default:cout<<"choose correct option "<<endl;
		}
	}
}


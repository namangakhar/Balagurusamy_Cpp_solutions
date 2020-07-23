#include<iostream>
#include<cstring>
using namespace std;

////Q1,Q2  inheritance
//class account
//{
//	protected:
//	char* name;
//	int accno;
//	short acctype;
//	public:
//	account(int no,short type,char *s)
//	{
//		name=new char[strlen(s)];
//		strcpy(name,s);
//		accno=no;
//		acctype=type;
//	}
//	void display()
//	{
//		cout<<"Name : "<<name<<"\naccno : "<<accno<<endl<<"acctype : "<<((acctype>1)?"Current account":"Savings account")<<endl; 
//	}
//};
//
//bool check(int x)
//{
//	if(x>0)
//	return true;
//	return false;
//}
//
//class cur_acct:public account
//{
//	int balance=0;
//	public:
//		cur_acct(int no,short type,char *s):account(no,type,s){
//		};
//		void deposit(int);
//		void withdraw(int);
//		void display(){
//			account::display();
//			cout<<"Current balance : "<<balance<<endl;
//		}
//};
//void cur_acct::deposit(int x)
//{
//	if(check(x))
//	balance+=x;
//}
//void cur_acct::withdraw(int x)
//{
//	if(check(x)){
//		if(balance>x){
//	
//			balance-=x;
//			if(balance<500){
//			cout<<"While widrawing : "<<x<<endl<<"Your current balance has fallen below minimum balance\nservice charge of Rs 50 is Charged."<<endl;
//			balance-=50;}}
//		else
//		cout<<"You dont have enough money in the account "<<endl;
//	}
//}
//
//class sav_acct:public account
//{
//	int balance=0;
//	int *date[2];
//	public:
//		sav_acct(int no,short type,char *s):account(no,type,s){
//			date[0]=0;
//		}
//		void deposit(int);
//		void withdraw(int);
//		void intrest();
//		void display(){
//			intrest();
//			account::display();
//			cout<<"Savings balance : "<<balance<<endl;
//		}
//};
//void sav_acct::deposit(int x)
//{
//	if(check(x))
//	{
//	intrest();
//	balance+=x;
//	}
//}
//void sav_acct::withdraw(int x)
//{
//	if(check(x)){
//		intrest();
//		if(balance>x){
//			balance-=x;}
//		else
//		cout<<"You dont have enough money in the account "<<endl;
//	}
//}
//void sav_acct::intrest()
//{
//	date[1]=new int[3];
//	cout<<"enter todays date(number) : ";cin>>date[1][0];
//	cout<<"enter todays month(number) : ";cin>>date[1][1];
//	cout<<"enter todays year(number) : ";cin>>date[1][2];
//	if(date[0]!=0)
//	{
//	int M[]={31,28,31,30,31,30,31,31,30,31,30,31};
//	float days=0;
//	days=date[1][0]-date[0][0];
//	for(int i=date[0][1];i<date[1][1];i++)
//	days+=M[i-1];
//	for(int i=date[1][1];i<date[0][1];i++)
//	days-=M[i-1];
//	days=days+(date[1][2]-date[0][2])*365;
//	float x=0.1*((days/365)*balance);
//	balance=balance+x;
//	}
//	date[0]=date[1];
//}
//
//int main()
//{
//	char n[]="hello hi",n1[]="Naman Gakhar";
//	cur_acct cr(101,2,n),cr2(102,2,"Hello world");
//	cr2.deposit(2000);
//	cr2.deposit(2150);
//	cr.deposit(1000);
//	cr.withdraw(100);
//	cr2.withdraw(4000);
//	cr.display();
//	cr2.display();
//	
//	cout<<endl<<"**********************************"<<endl;
//	
//	sav_acct s(201,1,"Theepicuremale");
//	s.deposit(1000);
//	s.withdraw(900);
//	s.display();
//}


//Q3,Q4    Multiple inheritance
//class staff
//{
//	int code ;
//	char* name;
//		public:
//	
//		staff(int c, char* s)
//		{code=c;
//		name=new char[strlen(s)];
//		strcpy(name,s);
//		}
//		void show()
//		{
//		cout<<"code : "<<code<<endl<<" name:"<<name<<endl;}
//	};
//	
//class education
//{
//	char *quali;
//	public:
//		education(char *str)
//	{	quali=new char[strlen(str)];
//		strcpy(quali,str);
//		}
//		void show()
//		{
//		cout<<"qualification : "<<quali<<endl;}
//};
//
//class teacher:public staff,public education
//{
//	char* subject,*publication;
//	public:
//		
//		teacher(char* str,char* pub,int c,char* s,char*s1):staff(c,s),education(s1)
//		{subject=new char[strlen(str)];
//		strcpy(subject,str);
//		publication=new char[strlen(pub)];
//		strcpy(publication,pub);
//		}
//		void show()
//		{
//		staff::show();
//		education::show();
//		cout<<"subject : "<<subject<<endl<<" Publication"<<publication<<endl;
//		cout<<endl<<endl;}
//		};
//
//class officer:public staff,public education
//{
//	char* grade;
//	public:
//		officer(char* str,int c,char* s,char* s1):staff(c,s),education(s1)
//		{grade=new char[strlen(str)];
//		strcpy(grade,str);
//		}
//		void show()
//		{
//		staff::show();
//		education::show();
//		cout<<"grade : "<<grade<<endl;
//		cout<<endl<<endl;}
//	};
//
//class typist:public staff
//{
//	int speed;
//	public:
//		typist(int spd,int c,char* s):staff(c,s)
//		{speed=spd;}
//		void show()
//		{
//		staff::show();
//		cout<<"speed : "<<speed<<endl;}
//};
//
//class regular:public typist
//{
//	int wage;
//	public:
//		regular(int w,int spd,int c,char *s):typist(spd,c,s)
//		{wage=w;}
//		void show()
//		{typist::show();
//		cout<<"wage : "<<wage<<endl;
//		cout<<endl<<endl;
//		}
//};
//class casual:public typist
//{
//	int wage;
//	public:
//		casual(int w,int spd,int c,char *s):typist(spd,c,s)
//		{wage=w;}
//		void show()
//		{typist::show();
//		cout<<"wage : "<<wage<<endl;
//		cout<<endl<<endl;
//		}
//};
//
//int main()
//{
//	teacher t("programming with c++"," Tata McGraw Hill",420,"Ataur","PHD from programming ");
//	officer o("First class",222,"Md. Rashed","2 years experienced");
//	regular rt(15000,85,333,"Robiul Awal");
//	casual ct(10000,78.9,333,"Kawser Ahmed");
//	cout<<" About teacher: "<<endl;
//	t.show();
//	cout<<" About officer:"<<endl;
//	o.show();
//	cout<<" About regular typist :"<<endl;
//	rt.show();
//	cout<<" About causal typist :"<<endl;
//	ct.show();
//}




////Q5  virtual classes
//class person
//{
//	protected:
//	char* name;
//	int code;
//	public:
//		person(char*s,int c)
//		{
//			name=new char[strlen(s)];
//			strcpy(name,s);
//			code=c;
//		}
//};
//
//class account:public virtual person
//{
//	protected:
//	int pay;
//	public:
//		account(char*s,int c,int p):person(s,c),pay(p){};
//		void virtual display()=0;
//};
//
//class admin:public virtual person
//{
//	protected:
//	int experience;
//	public:
//		admin(char*s,int c,int p):person(s,c),experience(p){};
//		void virtual display()=0;
//};
//class people:public account,public admin
//{
//	public:
//	people(char*s,int c,int p,int e):person(s,c),account(s,c,p),admin(s,c,e) {};
//	void display(){
//		cout<<"Name : "<<name<<endl;
//		cout<<"Code : "<<code<<endl;
//		cout<<"Pay : "<<pay<<endl;
//		cout<<"Experience : "<<experience<<" years"<<endl;
//	}
//};
//int main()
//{
//	people p1("Naman Gakhar",101,100000,1),p2("Theepicuremale",102,50000,3);
//	p1.display();
//	p2.display();
//	
//}



////Q6    Nested classes
//class staff
//{
//	int code ;
//	char* name;
//		public:
//	
//		staff(int c, char* s)
//		{code=c;
//		name=new char[strlen(s)];
//		strcpy(name,s);
//		}
//		void show()
//		{
//		cout<<"code : "<<code<<endl<<" name:"<<name<<endl;}
//	};
//	
//class education
//{
//	char *quali;
//	public:
//		education(char *str)
//	{	quali=new char[strlen(str)];
//		strcpy(quali,str);
//		}
//		void show()
//		{
//		cout<<"qualification : "<<quali<<endl;}
//};
//
//class teacher:public education
//{
//	staff a;
//	char* subject,*publication;
//	public:
//		
//		teacher(char* str,char* pub,int c,char* s,char*s1):a(c,s),education(s1)
//		{subject=new char[strlen(str)];
//		strcpy(subject,str);
//		publication=new char[strlen(pub)];
//		strcpy(publication,pub);
//		}
//		void show()
//		{
//		a.show();
//		education::show();
//		cout<<"subject : "<<subject<<endl<<" Publication"<<publication<<endl;
//		cout<<endl<<endl;}
//		};
//
//class officer:public education
//{
//	staff a;
//	char* grade;
//	public:
//		officer(char* str,int c,char* s,char* s1):a(c,s),education(s1)
//		{grade=new char[strlen(str)];
//		strcpy(grade,str);
//		}
//		void show()
//		{
//		a.show();
//		education::show();
//		cout<<"grade : "<<grade<<endl;
//		cout<<endl<<endl;}
//	};
//
//class typist
//{
//	staff a;
//	int speed;
//	public:
//		typist(int spd,int c,char* s):a(c,s)
//		{speed=spd;}
//		void show()
//		{
//		a.show();
//		cout<<"speed : "<<speed<<endl;}
//};
//int main()
//{
//	teacher t("programming with c++"," Tata McGraw Hill",420,"Ataur","PHD from programming ");
//	officer o("First class",222,"Md. Rashed","2 years experienced");
//	cout<<" About teacher: "<<endl;
//	t.show();
//	cout<<" About officer:"<<endl;
//	o.show();
//}

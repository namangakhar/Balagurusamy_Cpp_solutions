#include<iostream>
using namespace std;
int main()
{
	int x,y;
	try{
		cin>>x>>y;
		if(x-y==0)
		throw 'a';
		if(x==1)
		throw x;
		
		cout<<"x: "<<x<<endl<<"y: "<<y;
	}
	catch(int)
	{cout<<"x==1";
	}
	catch(...)
	{
		cout<<"in catch all";
	}
}

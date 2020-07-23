#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v)
{
	vector<int>::iterator it=v.begin();
	for(it=(v.begin());it<(v.end());it++)
	{
		cout<<*it<<' ';
	}
	cout<<endl;
}
int main()
{
	vector <int> v(10);
	v.at(0)=0;
	for(int it=1;it<v.size()-1;it++)
	{
		v[it]=1;
	}
	v.at(9)=9;
	display(v);
	v.find(9);
}

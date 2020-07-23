#include<iostream>
using namespace std;
class temp
{
	public:
		void convert(float);
};
void temp::convert(float a)
{	cout<<((9/5.0)*a +32);
}

findmax(int a, int b){
	if(a>b)
	return a;
	return b;
}
int main(){
	int a,b,i;
//	cout<<"Maths   ="<<90<<"\nPhysics  ="<<77<<"\nChemistry ="<<69;
//	cin>>a>>b;
//	cout<<findmax(a,b)<<"Enter a number"<<endl;
//	cin>>a;
//	for(i=0;i<a;i++)
//		cout<<"Well Done";
//	
//	cin>>a>>b>>i;
//	cout<<a/(b-i);
	
	//temp conversion
	cin>>a;
	cout<<(5.0/9.0)*(a-32.0)<<endl;
	temp t;
	t.convert(a);
	}

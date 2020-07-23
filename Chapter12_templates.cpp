#include<iostream>
using namespace std;

////Q1
//template <class t>
//t findmin(t *x, int n)
//{
//	t min=x[0];
//	for(int i=1;i<n;i++)
//	{
//		if(x[i]<min)
//		{//cout<<"min="<<min<<" ";
//		min=x[i];}
//		//cout<<"ran"<<i<<endl
//	}
//	return min;
//}
//int main()
//{
//	int a[]={10,20,40,60,5,25,8};
//	float b[]={12.5,243.5,12,24.5,11.01,9.99,3.45,45.07};
//	cout<<findmin(a,sizeof(a)/sizeof(a[0]))<<endl;
//	cout<<findmin(b,sizeof(b)/sizeof(b[0]))<<endl;
//}




//Q2
template<class t>
class vector
{
	t *vect;
	int size;
	public:
		void createvector(int s)
		{size=s;
		vect=new t[s];
		}
		void setelement(int s,t x)
		{vect[s-1]=x;
		}
		void multiply(t x);
		void display(void);
		void remove(int x);
};
template <class t>
void vector<t>::multiply(t x)
{
	for(int i=0;i<size;i++)
	vect[i]*=x;
}
template <class t>
void vector<t>::display()
{
	for(int i=0;i<size;i++)
	cout<<vect[i]<<"\t";
	cout<<endl;
}
template <class t>
void vector<t>::remove(int x)
{
	size--;
	for(int i=x-1;i<size;i++)
	vect[i]=vect[i+1];
}
int main()
{
	vector<float> v;
	v.createvector(3);
	v.setelement(1,4.5);
	v.setelement(2,2.5);
	v.setelement(3,9.3);
	v.display();
	v.multiply(3.2);
	v.display();
	v.setelement(2,1.1);
	v.display();
	v.remove(1);
	v.display();
}


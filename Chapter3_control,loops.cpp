#include<iostream>
#include<cmath>
using namespace std;

////Q1
//void swap(int &x,int &y){
//	x=x*y;
//	y=x/y;
//	x=x/y;
//}
//
//inline void print(int a,int b){
//	cout<<a<<endl<<b<<endl;
//}
//
//int main()
//{
//	int a=10,b=6;
//	print(a,b);
//	swap(a,b);
//	print(a,b);
//}



////Q2
//int main()
//{
//	int m,*vec;
//	cout<<"Enter Vector size : ";
//	cin>>m;
//	vec=new int[m];
//	cout<<"Enter values for vector elements"<<endl;
//	for(int i=0;i<m;i++)
//	cin>>vec[i];
//	cout<<"Values are"<<endl;
//	for(int i=0;i<m;i++)
//	cout<<vec[i]<<"  ";	
//}



////Q3
//int main()
//{
//	for(int i=1;i<6;i++)
//	{
//		for(int j=0;j<i;j++)
//		cout<<i;
//		cout<<endl;
//	}
//}



////Q4
//inline void invest(int p,float r,int n){
//	cout<<float(p*(pow((1+r),n)))<<"\t";
//}
//
//int main()
//{
//	int p[10],r[10];
//	for(int i=0;i<10;i++){
//		for(int n=1;n<11;n++)
//			invest(1000*(i+1),0.11+(i*0.01),n);
//		cout<<endl;
//	}
//}




////Q5
//int main()
//{
//	int q=1,v,counts[6]={0,0,0,0,0,0};
//	do {
//		cout<<"Please vote of candidate 1/2/3/4/5 by pressing app. number, press 0 to exit "<<endl;
//		cin>>v;
//		switch(v){
//			case 0:q=0;break;
//			case 1:counts[0]++;break;
//			case 2:counts[1]++;break;
//			case 3:counts[2]++;break;
//			case 4:counts[3]++;break;
//			case 5:counts[4]++;break;
//			default:counts[5]++;
//		}
//	}while(q);
//	
//	for(int i=0;i<5;i++){
//	cout<<"Votes for candidate "<<i+1<<" = "<<counts[i]<<endl;	
//	}
//	cout<<"spoilt ballets = "<<counts[5
//	]<<endl;
//}





////Q9
//int main()
//{
//	int q=1,v,nos[50];
//	do {
//		cout<<"Enter the numbers to for statistical analysis(0 to quit) : "<<endl;
//		cin>>nos[q-1];
//		if(nos[q-1]==0)
//			break;
//		q++;
//	}while(true);
//	
//	float x1=0,stdvar=0;
//	for(int i=0;i<q-1;i++){
//		x1+=nos[i];
//	}
//	x1=x1/(q-1);
//	for(int i=0;i<q-1;i++){
//		stdvar+=(pow((nos[i]-x1),2))/(q-1);
//	}
//	cout<<"Variance : "<<stdvar<<endl;
//	cout<<"std var : "<<pow(stdvar,0.5)<<endl;
//}




//Q10
int main()
{
	int x;
	float total=0;
	cout<<"Enter your Energy consumption in KWh : ";
	cin>>x;
	if(x<100)
		total=.6*x;
	if(x<300&&x>=100)
		total=60.0 + 0.8*(x-100);
	else
		total=220+ .9*(x-300);
	if(total<50)
		total=50;
	if(total>300)
	total=total*1.15;
		cout<<"Total Bill : "<<total;
}

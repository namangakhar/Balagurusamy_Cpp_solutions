#include<iostream>
using namespace std;

////Q1
//int main()
//{
//	int x,y;
//	cout<<"Enter dimensions of the matrix : ";
//	cin>>x>>y;
//	int mat[x][y];
//	cout<<"Enter Matrix element ";
//		//Entering matrices elements
//	for(int i=0;i<x;i++){
//		for(int j=0;j<y;j++){
//			cout<<i<<","<<j<<" : ";
//			cin>>mat[i][j];
//		}
//	}
//		//displaying matrix elements
//	for(int i=0;i<x;i++){
//		for(int j=0;j<y;j++){
//			cout<<mat[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}



////Q2
//void matrix(int m, int n){
//	int **matrix=new int*[m];
//	for(int i=0;i<n;i++)
//	matrix[i]=new int[n];
//		cout<<"Enter Matrix element ";
//		//Entering matrices elements
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			cout<<i<<","<<j<<" : ";
//			cin>>matrix[i][j];
//		}
//	}
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			cout<<matrix[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}
//
//
//int main()
//{
//	int m,n;
//	cout<<"Enter matrix size : ";
//	cin>>m>>n;
//	matrix(m,n);
//}	



////Passing 2d arrays
//void matrix(int *matrix,int m, int n){
//		cout<<"Enter Matrix element ";
//		//Entering matrices elements
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			cout<<i<<","<<j<<" : ";
//			cin>>*(matrix+(i*n)+j);
//		}
//	}
//	for(int i=0;i<m;i++){
//		for(int j=0;j<n;j++){
//			cout<<*(matrix+(i*n)+j)<<" ";
//		}
//		cout<<endl;
//	}
//}
//
//
//int main()
//{
//	int m,n;
//	cout<<"Enter matrix size : ";
//	cin>>m>>n;
//	int mat[m][n];
//	matrix(&mat[0][0],m,n);
//	
//}





////Passing 1-d array
//void matrix(int *matrix,int m, int n){
//		cout<<"Enter Matrix element ";
//		//Entering matrices elements
//	for(int i=0;i<m;i++){
//			cin>>matrix[i];
//	}
//	for(int i=0;i<m;i++){
//			cout<<matrix[i]<<" ";
//	}
//	cout<<endl;
//}
//
//
//int main()
//{
//	int m,n;
//	cout<<"Enter matrix size : ";
//	cin>>m;
//	int mat[m];
//	matrix(mat,m,0);
//	
//}


pow(int m,int n){
cout<<"in pow1";
}
pow(double m, int n)		//must use double float wont work
{cout<<"in pow2";
}
int main()
{
	pow(2.2,3);
	pow(2,3);
}

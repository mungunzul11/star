#include <iostream>

using namespace std;

int main (){
	int i, j, n;
	cout<<" Input number: ";
	cin>>n;
	for (int i=1; i<=n; i++){
			
		for(j=2; j<=n; j++){
			if(i==1 || j==2 || i==n){
				cout<<"*";}
				else {
					cout<<" ";
				}
			
			cout<<" ";}
		
		cout<<"*"<<endl;
	}
	cout<<"-----------------------------------"<<endl;
	int row , col, l, m;
	cout<<"Input number of row: ";
	cin>>row;
	cout<<"Input number of column: ";
	cin>>col;
	for (int l=1; l<=row ; l++){
		
		for (int m=2; m<=col; m++){
			if ( l==1 || m==2 || l==row){
				cout<<"*";
			}else{
				cout<<" ";
			}
		cout<<" ";}
		cout<<"*"<<endl;}
	return 0;
}

#include <iostream>

using namespace std;

int main(){
	int n, col, row;
	cout<<"enter any number:";
	cin>>n;
	for(int row=1; row<(2*n); row++){
		for(int col=1; col<=n; col++){
			if( row==1 &&(col==1  || col==n)  || 
			    row==n &&(col==n || col==1) ||
			    row==2*n-1 &&(col==1||col==n) ){
				cout<<" ";
			}
			else  if (row==1||row==2*n-1 ||row==n ||col==1||col==n){
				cout<<"*";
			}else {
				cout<<" ";
			}
			
			
			
		}
		cout<<endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main (){
	int col, row, n ;
	cout<<" Input any number:";
	cin>>n;
	for(int row=1; row<=n; row++){
		for(int space=1 ; space<=row-1 ;space++){
			cout<<" ";
		}
		for(int col=2*row-1; col<=(2*n-1); col++){
			if(row==1|| col==2*row-1 || col==(2*n-1)){
				cout<<"*";
			} else {
				cout<<" ";
			}
		}
					
		cout<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main (){
	int n, row, col;
	cout<<"Input any number:";
	cin>>n;
	for(int row=1; row<=n; row++){
		for(int space=1;space<=(2*row-2);space++){
			cout<<" ";
		}
		for(int col=row;col<=n;col++){
			cout<<"*";}
		
	    cout<<endl;
	}
	for(row=2;row<=n;row++){
		for(int space=row;space<=(2*n-row-1);space++){
			cout<<" ";
		}
		for(int col=1; col<=row;col++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}

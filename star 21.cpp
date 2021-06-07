#include <iostream>

using namespace std;

int main (){
	int n, col, row;
	cout<<"INPUT ANY NUMBER:";
	cin>>n;
	for (int row=1; row<=n-1; row++){
		for(int col=row; col<=n-1; col++){
			cout<<" ";
		}
		for(int col=1; col<=(2*row-1); col++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int row=1; row<=n; row++){
		for(int col=1; col<=row-1; col++){
			cout<<" ";
		}
		for(int col=(2*row-1) ; col<=(2*n-1); col++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

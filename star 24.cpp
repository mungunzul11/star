#include <iostream>
using namespace std;
int main (){
	int n, col, row;
	cout<<"Enter any number:";
	cin>>n;
	for(int row=1;row<=n;row++){
		for(int space=row;space<=n-1;space++){
			cout<<"-";
		}
		for(int col=row;col<=n;col++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	for(int row=2;row<=n;row++){
		for(int space=2; space<=row; space++){
			cout<<"-";
		}
		for(int col=1;col<=row;col++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

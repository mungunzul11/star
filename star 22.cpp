#include <iostream>

using namespace std;

int main (){
	int row, col, n;
	cout<<"Enter size:";
	cin>>n;
	for (int row=1; row<=(2*n-1) ;row++){
		cout<<"*";
	}
	cout<<endl;
	for(int row=2; row<=n; row++){
		for(int col=row ;col<=n;col++){
			cout<<"*";
		}
		for(int col=1; col<=(2*row-3); col++){
			cout<<"-";
		}
		for(int col=row ;col<=n;col++){
			cout<<"*";
			}
		cout<<endl;
	}
	for(int row=1 ;row<=n-1; row++){
		for(col=1; col<=row ;col++){
			cout<<"*";
		}
		for(col=row; col<=(2*n-2-row); col++){
			cout<<"-";
		}
		for(col=1 ; col<=row ; col++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int row=1;row<=(2*n-1);row++){
		cout<<"*";
	}

	return 0;
}

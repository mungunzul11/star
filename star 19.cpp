#include <iostream>

using namespace std;

int main (){
	int n, col, row ;
	cout<<" Enter any number of size: ";
	cin>>n;
	for(int row=1; row<=n; row++){
		for(int col=1; col<=row ;col++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int row=1; row<=n; row++){
		for(int col=row; col<=n-1; col++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
	
	
}

/*   *
     **
     ***
     ****
     *****
     ****
     ***
     **
     *    */



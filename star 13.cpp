#include <iostream>

using namespace std;

int main (){
	int col, row, n ;
	cout<<"Input any number of row:";
	cin>>n;
	for(int row=1; row<=n; row++){
		
		for(col=row;col<=n; col++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

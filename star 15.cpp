#include <iostream>

using namespace std;

int main (){
	int n, col, row, space;
	cout<<"Input any size: ";
	cin>>n;
	for(int row=1; row<=n; row++){
		for(int space=row; space<=n; space++){
			cout<<" ";
		}
		
		for (int col=1 ;col<=(2*row-1);col++){
			cout<<"*";
		}
		cout<<endl;
	} 
	return 0;
}

#include <iostream>

using namespace std;

int main (){
	int row,col, i, j ;
	cout<<"Input  number of row: ";
	cin>>row;
	cout<<"Input number of column: ";
	cin>>col;
	for (int i=1; i<=row;i++){
			for (j=2; j<=col; j++){
			cout<<"* ";
		}
		cout<<"*"<<endl;
	}
	return 0;
}

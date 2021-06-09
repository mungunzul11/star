#include <iostream>
using namespace std;
int main (){
	int n, col, row;
	cout<<"Enter any number:";
	cin>>n;
	for(int row=1;row<=(2*n-1);row++){
		for(int col=1;col<=(2*n-1);col++){
			if(col==n||row==n){
				cout<<"+";
			}else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}


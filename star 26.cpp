#include <iostream>
using namespace std;
int main (){
	int n, col,  row;
	cout<<"Enter any number:";
	cin>>n;
	i=(2*n-1);
	
	for(int row=1;row<=i;row++){
	
		for(int  col=1;col<=i;col++){
			if(col==row || col==(i-row+1)){
				cout<<"*";
			}else {
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	return 0;
}

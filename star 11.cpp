#include <iostream>

using namespace std;

int main (){
	int row, col, n;
	cout<<"Input row of number: ";
	cin>>n;
	for (int row=1; row<=n; row++){
		for (int col=row ; col<n; col++ ){
			cout<<" ";
		}
	    for(int col=1; row<=n; row++){
			
					
			cout<<"*";
			}
		cout<<endl;
	}
	return 0;
}

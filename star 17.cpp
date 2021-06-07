#include <iostream>

using namespace std;

int main (){
	int n, row, col;
	cout<<"Input any size: ";
	cin>>n;
	for(int row=1; row<=n; row++){
		for(int space=1; space<=row; space++){
			cout<<" ";
		}
		for(int col=2*row-1; col<=(2*n-1) ;col++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
/*     *********
        *******
         *****
          ***
           *   */
    

#include <iostream>

using namespace std;

int main (){
	int n, row, col;
	cout<<"Enter any size:";
	cin>>n;
	for(int row=1; row<=n; row++){
		for(int space=row; space<=n ;space++){
			cout<<" ";
		}
		for(int col=1; col<=(2*row-1) ; col++){
			if(col==1 || row==n || col==(2*row-1)){
				cout<<"*";
			}else {
				cout<<" ";
			}
			
		}
		
		cout<<endl;
	}
	
	return 0;
}
  /*   *
      * *
     ***** */

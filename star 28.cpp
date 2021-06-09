#include <iostream>

using namespace std; 
int main (){
	int col, row , n ;
	cout<<"Enter any number: ";
	cin>>n;
	for(int row=n/2; row<=n; row+=2 ){
		for(int col=row ;col<n-1; col+=2){
			cout<<"-";
		}
		for(int col=1;col<=row ;col++){
			cout<<"*";
		}
		for(int col=row;col<n ;col+=1){
			cout<<"-";
		}
		for(int col=1; col<=row; col+=1 ){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int row=1;row<=n;row++){
		for(int col=1; col<row; col++){
			cout<<" ";
		}
		for(int col=(2*row-1); col<=(2*n-1);col+=1){
			cout<<"*";
		}
		cout<<endl;
	}
	
		
	
	return 0;
	
	
}

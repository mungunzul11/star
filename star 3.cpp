#include <iostream>

using namespace std;

int main (){
	int i, j ,n;
	cout<<"Input number: ";
	cin>>n;
	for (int i=1 ; i<=n; i++){
		for (j=1; j<=n; j++){
			if (i==1 || j==1 || i==n  ||i==j || j==n-i+1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	
	
	return 0;
	}
	

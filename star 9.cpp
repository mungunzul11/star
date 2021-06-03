#include <iostream>

using namespace std;

int main (){
	int i, j, n;
	cout<<"Input number of row: ";
	cin>>n;
	for (int i=1; i<=n; i++){
		for (int j=1;j<=i;j++){
			cout<<" ";
			if (j==1 ||i==j+3 || i==n){
				cout<<"*";
			}
		}
		
		cout<<endl;
	}
return 0;
}

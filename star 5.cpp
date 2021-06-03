#include <iostream>

using namespace std;

int main (){
	int i, j, n;
	cout<<"Input number of row: ";
	cin>>n;
		for (int i=1; i<=n; i++){
			for (int j=2; j<=n-i+1; j++){
				cout<<" ";
			}
		    for(int j=2; j<=n; j++){
			cout<<" ";
			if (j==2 || i==n|| j==n+1 ||i==1){
				cout<<"*";}
				else {
					cout<<" ";
				}
			}
				
		cout<<"*"<<endl;
	}
	return 0;
}

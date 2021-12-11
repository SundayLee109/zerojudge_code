
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,count=0;
	double wtf;
	cin>>n;
	int test[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>test[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=test[i][0];j<=test[i][1];j++){
			if(sqrt((double)j)-(int)sqrt(j)==0){
				count=count+j;
			}
		}
		cout<<"Case "<<i+1<<": "<<count<<endl;
		count=0;
	}
	return 0;
}

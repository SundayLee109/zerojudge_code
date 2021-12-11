#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string n;
	cin>>n;
	char z[n.length()];
	strcpy(z,n.c_str());
	for(int i=n.length()-1;i>=0;i--){
		if((int)z[i]==48){
			if(i==0){
				cout<<z[i];
			}else{
				continue;
			}
		}else{
			for(int j=i;j>=0;j--){
				cout<<z[j];
			}
			break;
		}
	}
}

#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	while (getline(cin, s)){
		int n=0, i;
		int len=s.length();
		for (i=0; i<len; i++){
			if (isalpha(s[i])!=0 && isalpha(s[i-1])==0){
				n++;
			}
		}
		cout << n <<endl;
	}
}
//抄了一下但仔細看過，自己想法也是這樣

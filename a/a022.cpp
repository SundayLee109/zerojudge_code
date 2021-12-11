#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string n;
    int flag=1;
    cin>>n;
    int x=n.length();
    char c[x];
    strcpy(c,n.c_str());
    for(int i=0;i<x;i++){
        if(c[i]!=c[x-i-1]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"no\n";
    }else{
        cout<<"yes\n";
    }
    return 0;
}

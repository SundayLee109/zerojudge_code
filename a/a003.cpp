#include <iostream>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;
c=(2*a+b)%3;
if(c==0){
cout<<"普通"<<endl;
}else if(c==1){
cout<<"吉"<<endl;
}else{
cout<<"大吉"<<endl;
}
return 0;
}

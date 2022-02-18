#include <iostream>
using namespace std;
int main(){
int n,max=0,maxn=0,tmp;
while(cin>>n){
int s[n];
for(int i=0;i<n;i++){
cin>>s[i];
}
for(int i=n-1;i>0;i--){
max=0;
for(int j=0;j<i+1;j++){
if(s[j]>max){
max=s[j];
maxn=j;
}
}
tmp=s[maxn];
s[maxn]=s[i];
s[i]=tmp;
}
for(int i=0;i<n;i++){
cout<<s[i]<<" ";
}
cout<<endl;
}
}

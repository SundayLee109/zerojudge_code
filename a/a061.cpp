#include <iostream>
#include <cmath>
using namespace std;
int main(){
char phw[7];
int p[6],phn[7];
cin>>phw;
for(int i=0;i<7;i++){
 phn[i]=(int)phw[i];
}
for(int i=0;i<6;i++){
p[i]=abs(phn[i+1]-phn[i]);
}
for(int i=0;i<6;i++){
cout<<p[i];
}
return 0;
}

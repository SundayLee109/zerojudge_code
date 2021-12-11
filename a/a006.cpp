#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,D,x1,x2;
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D<0){
        cout<<"No real root\n";
    }else if (D==0){
        cout<<"Two same roots x="<<-b/(a*2)<<endl;
    }else{
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"Two different roots x1="<<x1<<" , "<<"x2="<<x2<<endl;
    }
    return 0;
}

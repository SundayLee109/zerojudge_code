#include <iostream>
using namespace std;
int main(){
    double a[5];
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        for(int j=0;j<4;j++){
        cin>>a[j];
        }
        if(a[1]-a[0]==a[2]-a[1]){
            a[4]=a[3]+(a[1]-a[0]);
            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
        }else if(a[1]/a[0]==a[2]/a[1]){
            a[4]=a[3]*(a[1]/a[0]);
            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
        }
    }
}

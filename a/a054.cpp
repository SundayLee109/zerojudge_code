#include <iostream>
using namespace std;
int main(){
    int enu[26] = {1,0,9,8,7,6,5,4,9,3,2,2,1,0,8,9,8,7,6,5,4,3,1,3,2,0};
    char nc[9];
    int total=0,ni[9],key;
    for(int i=8;i>=0;i--){
        cin>>nc[i];
        ni[i]=nc[i] - '0';
    }
    for(int i=0;i<9;i++){
        if(!i){
            total=total+ni[i];
        }else{
            total=total+(ni[i]*i);
        }
    }
    key=(10-(total%10))%10;
    for(int i=65;i<91;i++){
        if(enu[i-65]==key){
            cout<<(char)i;
        }
    }
    return 0;
}

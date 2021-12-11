#include <iostream>
using namespace std;
int main(){
  int count[3]={0,0,0},n,num;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>num;
    count[num%3]++;
  }
  cout<<count[0]<<" "<<count[1]<<" "<<count[2]<<endl;
}

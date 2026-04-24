#include<iostream>
using namespace std;
int main(){
  int i,j,n;
  int num=1;
  long sum=0;
  cout<<"Enter a number:";
  cin>>n;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        sum=sum+num;
        num++;
    }
  }
  cout<<sum<<endl;
  cout<<num;
  return 0;
}

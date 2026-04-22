#include<iostream>
using namespace std;
int main(){
int n,i,sum=0;
cout<<"Enter a number:";
cin>>n;
for(i=1;i<=n;i++){
    if(i%2==0){
        sum=sum-i;  //sum=-n/2
    }
    else{
        sum=sum+i;  //sum=n+1/2
    }
}
cout<<sum;
return 0;
}

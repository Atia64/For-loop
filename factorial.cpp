#include<iostream>
using namespace std;
int main(){
int n,i;
cout<<"Enter a number:";
cin>>n;
int factorial=1;
for(i=1;i<=n;i++){
    factorial=factorial*i;
}
cout<<factorial;
return 0;
}

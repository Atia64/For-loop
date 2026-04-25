#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number:";
cin>>n;
bool isprime=true;
for(int i=2;i<=n/2;i++){
    if(n%i==0){
        isprime=false;
    }
}
if(isprime){
    cout<<"This number is prime number.";
}
else{
    cout<<"This number is not prime number.";
}
return 0;
}
